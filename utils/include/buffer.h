#pragma once

#include <stdio.h>

typedef void *buffer_t;

#define BLK_SPOOL_STATE_NONE 0x0000
#define BLK_SPOOL_STATE_END 0x0001
#define BLK_SPOOL_STATE_EXIT 0x0002
#define BLK_SPOOL_STATE_CUSTOM_01 0x0004
#define BLK_SPOOL_STATE_CUSTOM_02 0x0008
#define BLK_SPOOL_STATE_CUSTOM_03 0x0010
#define BLK_SPOOL_STATE_CUSTOM_04 0x0020
#define BLK_SPOOL_STATE_CUSTOM_05 0x0040
#define BLK_SPOOL_STATE_CUSTOM_06 0x0080

#ifdef __cplusplus
extern "C" {
#endif
buffer_t buffer_create(size_t size);

int buffer_destroy(buffer_t buffer);

int buffer_clear(buffer_t buffer);

int buffer_reset(buffer_t buffer);
/*
push data to buffer
*/
int buffer_push_fixed(buffer_t buffer, const void *data, size_t nbytes);

int buffer_push_grown(buffer_t buffer, const void *data, size_t nbytes);

int buffer_push_wait(buffer_t buffer, const void *data, size_t nbytes);

int buffer_push_detected(buffer_t buffer, const void *data, size_t nbytes);

int buffer_push_state(buffer_t buffer, const void *data, size_t nbytes, int state);

/*
pop data from buffer
*/
int buffer_pop_fixed(buffer_t buffer, void *data, size_t maxbytes);

int buffer_pop_once(buffer_t buffer, void *data, size_t maxbytes);

int buffer_pop_state(buffer_t buffer, void *data, size_t maxbytes, int *state);

int buffer_pop_dump(buffer_t buffer, void *data, size_t maxbytes);

int buffer_pop_dump_state(buffer_t buffer, void *data, size_t maxbytes, int *state);

/*
reset
*/
int buffer_dump_reset(buffer_t buffer);

#ifdef __cplusplus
}
#endif