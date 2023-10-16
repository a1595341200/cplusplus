#include "buffer.h"
#include <errno.h>
#include <pthread.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <cassert>

typedef struct message_buffer_ {
  uint8_t* buffer;
  int data_len;
  int buffer_size;
  int front;
  int rear;
  int dump_pos;
  int wait_dump_len;
  int wait_read_len;
  int wait_write_len;
  int state;

  pthread_cond_t readable;
  pthread_cond_t writeable;
  pthread_cond_t dumpable;
  pthread_mutex_t lock;
} message_buffer;

int buffer_push(buffer_t buffer, const void* data, size_t nbytes);
int buffer_pop(buffer_t buffer, void* data, size_t nbytes);

buffer_t buffer_create(size_t size) {
  assert(size > 0);
  size += 1;
  message_buffer* object = (message_buffer*)nullptr;
  if ((object = (message_buffer*)malloc(sizeof(message_buffer))) == NULL) {
    return NULL;
  }
  object->buffer = (uint8_t*)malloc(size);
  object->buffer_size = size;
  object->data_len = 0;
  object->wait_dump_len = 0;
  object->wait_read_len = 0;
  object->wait_write_len = 0;
  object->dump_pos = 0;
  object->front = object->rear = 0;
  object->state = BLK_SPOOL_STATE_NONE;

  pthread_mutex_init(&object->lock, NULL);
  pthread_cond_init(&object->readable, NULL);
  pthread_cond_init(&object->writeable, NULL);
  pthread_cond_init(&object->dumpable, NULL);

  return object;
}

int buffer_destroy(buffer_t buffer) {
  assert(buffer);
  message_buffer* object = (message_buffer*)buffer;
  errno = 0;
  (void)pthread_mutex_destroy(&object->lock);
  (void)pthread_cond_destroy(&object->readable);
  (void)pthread_cond_destroy(&object->writeable);
  (void)pthread_cond_destroy(&object->dumpable);

  if (object->buffer)
    free(object->buffer);

  free(object);
  return 0;
}
int buffer_reset(buffer_t buffer) {
  assert(buffer);
  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);

  object->front = 0;
  object->rear = 0;
  object->data_len = 0;
  object->state = BLK_SPOOL_STATE_NONE;
  if (object->wait_write_len > 0) {
    object->wait_write_len = 0;
    pthread_cond_signal(&object->writeable);
  }
  pthread_mutex_unlock(&object->lock);
  return 0;
}
int buffer_clear(buffer_t buffer) {
  assert(buffer);
  message_buffer* object = (message_buffer*)buffer;
  if (object->buffer) {
    memset(object->buffer, 0, object->buffer_size);
  }
  return buffer_reset(buffer);
}

int buffer_push_fixed(buffer_t buffer, const void* data, size_t nbytes) {
  assert(buffer);
  if (!data || nbytes < 0) {
    return -1;
  }
  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);
  int need_len = object->data_len + nbytes;
  int capacity = object->buffer_size - 1;
  if (capacity < need_len) {
    if (nbytes > capacity) {
      printf("%u is bigger than %d\n", nbytes, capacity);
      pthread_mutex_unlock(&object->lock);
      return -1;
    } else {
      int reduce_num = need_len - capacity;
      object->front = (object->front + reduce_num) % object->buffer_size;
      object->data_len -= reduce_num;
    }
  }
  buffer_push(buffer, data, nbytes);
  pthread_mutex_unlock(&object->lock);
  return 0;
}

int buffer_push(buffer_t buffer, const void* data, size_t nbytes) {
  message_buffer* object = (message_buffer*)buffer;
  if (object->rear + nbytes >= object->buffer_size) {
    int num = object->buffer_size - object->rear;
    memcpy(object->buffer + object->rear, data, num);
    object->rear = 0;
    int left = nbytes - num;
    if (left > 0) {
      memcpy(object->buffer, data + num, left);
      object->rear += left;
    }
  } else {
    memcpy(object->buffer + object->rear, data, nbytes);
    object->rear += nbytes;
  }
  object->data_len += nbytes;
  if (object->wait_read_len > 0 && object->data_len >= object->wait_read_len) {
    object->wait_read_len = 0;
    pthread_cond_signal(&object->readable);
  }
  if (object->wait_dump_len > 0 && (object->rear - object->dump_pos) >= object->wait_dump_len) {
    object->wait_dump_len = 0;
    pthread_cond_signal(&object->dumpable);
  }
  return 0;
}

int buffer_push_grown(buffer_t buffer, const void* data, size_t nbytes) {
  assert(buffer);
  if (!data || nbytes < 0) {
    return -1;
  }
  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);

  int need_len = object->data_len + nbytes;
  int capacity = object->buffer_size - 1;
  if (capacity < need_len) {
    // 扩容
    int new_size = need_len * 2;
    uint8_t* new_buf = (uint8_t*)malloc(new_size);
    assert(new_buf != NULL);
    printf("blk_spool_push_grown [%p] realloc [%d]\n", new_buf, new_size);
    if (object->rear < object->front) {
      int num = object->buffer_size - object->front;
      memcpy(new_buf, object->buffer + object->front, num);
      if (object->rear > 0) {
        memcpy(new_buf + num, object->buffer, object->rear);
      }
    } else if (object->rear > object->front) {
      memcpy(new_buf, object->buffer + object->front, object->data_len);
    }
    free(object->buffer);
    object->buffer = new_buf;
    object->buffer_size = new_size;
    object->front = 0;
    object->rear = object->data_len;
  }
  buffer_push(buffer, data, nbytes);
  pthread_mutex_unlock(&object->lock);
  return 0;
}

int buffer_push_wait(buffer_t buffer, const void* data, size_t nbytes) {
  assert(buffer);
  if (!data || nbytes < 0) {
    return -1;
  }
  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);

  int need_len = object->data_len + nbytes;
  int capacity = object->buffer_size - 1;
  int left = 0;
  if (capacity < need_len) {
    if (capacity == object->data_len) {
      /*缓冲区已满*/
      object->wait_write_len = nbytes;
      while (object->wait_write_len != 0) {
        pthread_cond_wait(&object->writeable, &object->lock);
      }
      left = nbytes;
      nbytes = 0;
      goto _end;
    } else {
      /*先把缓冲区填满*/
      left = nbytes - (capacity - object->data_len);
      nbytes -= left;
    }
  }
  buffer_push(buffer, data, nbytes);
_end:
  pthread_mutex_unlock(&object->lock);
  if (left > 0) {
    /*递归*/
    buffer_push_wait(buffer, data + nbytes, left);
  }
  return 0;
}

int buffer_push_detected(buffer_t buffer, const void* data, size_t nbytes) {
  assert(buffer);
  if (!data || nbytes < 0) {
    return -1;
  }
  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);

  int need_len = object->data_len + nbytes;
  int capacity = object->buffer_size - 1;
  if (capacity < need_len) {
    pthread_mutex_unlock(&object->lock);
    return -1;
  }
  buffer_push(buffer, data, nbytes);
  pthread_mutex_unlock(&object->lock);
  return 0;
}

int buffer_push_state(buffer_t buffer, const void* data, size_t nbytes, int state) {
  assert(buffer);

  message_buffer* object = (message_buffer*)buffer;
  if (nbytes == 0) {
    if (object->state == BLK_SPOOL_STATE_NONE) {
      return -1;
    }
    pthread_mutex_lock(&object->lock);
    object->state |= state;

    if (state == BLK_SPOOL_STATE_END || state == BLK_SPOOL_STATE_EXIT) {
      if (object->wait_read_len > 0) {
        object->wait_read_len = 0;
        pthread_cond_signal(&object->readable);
      }
      if (object->wait_dump_len > 0) {
        object->wait_dump_len = 0;
        pthread_cond_signal(&object->dumpable);
      }
    }
    pthread_mutex_unlock(&object->lock);
    return 0;
  }
  if (!data || nbytes < 0) {
    return -1;
  }
  if (state != BLK_SPOOL_STATE_END && state != BLK_SPOOL_STATE_EXIT &&
      state != BLK_SPOOL_STATE_NONE) {
    pthread_mutex_lock(&object->lock);
    object->state |= state;
    state = BLK_SPOOL_STATE_NONE;
    pthread_mutex_unlock(&object->lock);
  }
  pthread_mutex_lock(&object->lock);

  int need_len = object->data_len + nbytes;
  int capacity = object->buffer_size - 1;
  int left = 0;

  if (capacity < need_len) {
    if (capacity == object->data_len) {
      object->wait_write_len = nbytes;
      while (object->wait_write_len != 0) {
        pthread_cond_wait(&object->writeable, &object->lock);
      }
      left = nbytes;
      nbytes = 0;
      goto _end;
    } else {
      left = nbytes - (capacity - object->data_len);
      nbytes -= left;
    }
  } else {
    if (state != BLK_SPOOL_STATE_NONE) {
      object->state |= state;
      if (object->wait_read_len > 0) {
        object->wait_read_len = 1;
      }
    }
  }
  buffer_push(buffer, data, nbytes);
_end:
  pthread_mutex_unlock(&object->lock);
  if (left > 0) {
    buffer_push_state(buffer, data + nbytes, left, state);
  }
  return 0;
}

int buffer_pop_once(buffer_t buffer, void* data, size_t maxbytes) {
  assert(buffer);
  if (!data || maxbytes <= 0) {
    return -1;
  }

  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);
  if (object->data_len < 1) {
    object->wait_read_len = 1;
    while (object->wait_read_len != 0) {
      pthread_cond_wait(&object->readable, &object->lock);
    }
  }
  maxbytes = maxbytes > object->data_len ? object->data_len : maxbytes;
  buffer_pop(buffer, data, maxbytes);
  pthread_mutex_unlock(&object->lock);
  return maxbytes;
}

int buffer_pop_state(buffer_t buffer, void* data, size_t maxbytes, int* state) {
  if (!state) {
    return -1;
  }
  *state = BLK_SPOOL_STATE_NONE;
  message_buffer* object = (message_buffer*)buffer;
  if (maxbytes == 0) {
    pthread_mutex_lock(&object->lock);
    int is_end = object->state & BLK_SPOOL_STATE_END;
    int is_exit = object->state & BLK_SPOOL_STATE_EXIT;
    *state = object->state;
    object->state = BLK_SPOOL_STATE_NONE;
    if (is_end) {
      object->state |= BLK_SPOOL_STATE_END;
    }
    if (is_exit) {
      object->state |= BLK_SPOOL_STATE_EXIT;
    }
    pthread_mutex_unlock(&object->lock);
    return 0;
  }
  pthread_mutex_lock(&object->lock);
  int is_end = object->state & BLK_SPOOL_STATE_END;
  int is_exit = object->state & BLK_SPOOL_STATE_EXIT;
  if (is_end || is_exit) {
    if (is_exit) {
      *state = BLK_SPOOL_STATE_EXIT;
      // spool->state = BLK_SPOOL_STATE_NONE;
      maxbytes = 0;
    } else {
      if (object->data_len <= maxbytes) {
        maxbytes = object->data_len;
        if (maxbytes > 0) {
          buffer_pop(buffer, data, maxbytes);
        }
        *state = BLK_SPOOL_STATE_END;
      } else {
        buffer_pop(buffer, data, maxbytes);
        if (object->state > BLK_SPOOL_STATE_END) {
          *state = object->state & (~BLK_SPOOL_STATE_END);
          object->state = BLK_SPOOL_STATE_END;
        }
      }
    }
  } else {
    if (object->data_len < maxbytes) {
      object->wait_read_len = maxbytes;

      while (object->wait_read_len != 0) {
        pthread_cond_wait(&object->readable, &object->lock);
      }
      pthread_mutex_unlock(&object->lock);
      goto _end;
    } else {
      buffer_pop(buffer, data, maxbytes);
      *state = object->state;
      object->state = BLK_SPOOL_STATE_NONE;
    }
  }
  pthread_mutex_unlock(&object->lock);
  return maxbytes;
_end:
  return buffer_pop_state(buffer, data, maxbytes, state);
}

int buffer_pop_dump(buffer_t buffer, void* data, size_t maxbytes) {
  assert(buffer);
  if (!data || maxbytes <= 0) {
    return -1;
  }
  int ret = 0;

  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);

  ret = maxbytes > object->data_len ? object->data_len : maxbytes;
  int num = object->data_len - ret; /*skip data len*/
  int new_front;
  if (ret == 0) {
    goto end;
  }

  if (object->front + num >= object->buffer_size) {
    num = num - (object->buffer_size - object->front);
    new_front = num;
  } else {
    new_front = object->front + num;
  }
  if (new_front + ret >= object->buffer_size) {
    num = object->buffer_size - new_front;
    memcpy(data, object->buffer + new_front, num);
    new_front = 0;
    int left = ret - num;
    if (left > 0) {
      memcpy(data + num, object->buffer, left);
    }
  } else {
    memcpy(data, object->buffer + new_front, ret);
  }
end:
  pthread_mutex_unlock(&object->lock);
  return ret;
}

int buffer_pop_dump_state(buffer_t buffer, void* data, size_t maxbytes, int* state) {
  if (!state) {
    return -1;
  }

  *state = BLK_SPOOL_STATE_NONE;
  if (maxbytes == 0) {
    return 0;
  }

  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);

  int is_end = object->state & BLK_SPOOL_STATE_END;
  int is_exit = object->state & BLK_SPOOL_STATE_EXIT;
  int can_dump_len = object->rear - object->dump_pos;  //因为不会删除数据，所以该值肯定>=0

  if (is_end || is_exit) {
    if (is_exit) {
      *state = BLK_SPOOL_STATE_EXIT;
      maxbytes = 0;
    } else {
      if (can_dump_len <= maxbytes) {
        maxbytes = can_dump_len;
        if (maxbytes > 0) {
          memcpy(data, object->buffer + object->dump_pos, maxbytes);
          object->dump_pos += maxbytes;
        }
        *state = BLK_SPOOL_STATE_END;
      } else {
        memcpy(data, object->buffer + object->dump_pos, maxbytes);
        object->dump_pos += maxbytes;
        if (object->state > BLK_SPOOL_STATE_END) {
          *state = object->state & (~BLK_SPOOL_STATE_END);
          object->state = BLK_SPOOL_STATE_END;
        }
      }
    }
  } else {
    if (can_dump_len < maxbytes) {
      object->wait_dump_len = maxbytes;
      while (object->wait_dump_len != 0) {
        pthread_cond_wait(&object->dumpable, &object->lock);
      }
      pthread_mutex_unlock(&object->lock);
      goto _end;
    } else {
      memcpy(data, object->buffer + object->dump_pos, maxbytes);
      object->dump_pos += maxbytes;
      *state = object->state;
      object->state = BLK_SPOOL_STATE_NONE;
    }
  }
  pthread_mutex_unlock(&object->lock);
  return maxbytes;
_end:
  return buffer_pop_dump_state(buffer, data, maxbytes, state);
}

int buffer_dump_reset(buffer_t buffer) {
  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);
  object->dump_pos = 0;
  if (object->wait_dump_len > 0 && (object->rear - object->dump_pos) >= object->wait_dump_len) {
    object->wait_dump_len = 0;
    pthread_cond_signal(&object->dumpable);
  }
  pthread_mutex_unlock(&object->lock);
  return 0;
}

int buffer_pop_fixed(buffer_t buffer, void* data, size_t maxbytes) {
  if (!data || maxbytes <= 0) {
    return -1;
  }
  message_buffer* object = (message_buffer*)buffer;
  pthread_mutex_lock(&object->lock);
  if (object->data_len < maxbytes) {
    object->wait_read_len = maxbytes;
    while (object->wait_read_len != 0) {
      pthread_cond_signal(&object->readable);
    }
  }
  buffer_pop(buffer, data, maxbytes);
  pthread_mutex_unlock(&object->lock);
  return 0;
}

int buffer_pop(buffer_t buffer, void* data, size_t nbytes) {
  message_buffer* object = (message_buffer*)buffer;
  if (object->front + nbytes >= object->buffer_size) {
    int num = object->buffer_size - object->front;
    memcpy(data, object->buffer + object->front, num);
    object->front = 0;
    int left = nbytes - num;
    if (left > 0) {
      memcpy(data + num, object->buffer, left);
      object->front += left;
    }
  } else {
    memcpy(data, object->buffer + object->front, nbytes);
    object->front += nbytes;
  }
  object->data_len -= nbytes;
  if (object->wait_write_len > 0) {
    object->wait_write_len = 0;
    pthread_cond_signal(&object->writeable);
  }
  return 0;
}