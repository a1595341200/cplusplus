/*
 * @Author: error: git config user.name & please set dead value or install git 1595341200@qq.com
 * @Date: 2023-11-24 09:42:06
 * @LastEditors: yao.xie 1595341200@qq.com
 * 1595341200@qq.com
 * @LastEditTime: 2023-11-24 11:21:37
 * @FilePath: /cplusplus/src/cplusplus/circularly_ordered_array/src/circularly_ordered_array.hpp
 * @Description:
 *
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved.
 */
#include <array>
#include <iostream>
template <typename Type, size_t Size>
class CircularlyOrderedArray {
 public:
  void push(const Type& t) {
    size_t readIndex = (mEnd + Size - 1) % Size;
    size_t setIdx{};
    bool bFound{};
    if (0 == mSize || t > mData[readIndex]) {
      mData[mEnd] = t;
    } else {
      setIdx = mEnd;
      if (t < mData[mEnd]) {
        return;
      }
      auto temp = mData;
      for (size_t item = 0; (item < mSize) && !bFound; ++item) {
        if (t > temp[readIndex]) {
          mData[setIdx] = t;
          bFound = true;
        } else {
          mData[setIdx] = temp[readIndex];
          setIdx = (setIdx + Size - 1) % Size;
          readIndex = (setIdx + Size - 1) % Size;
          if ((t > mData[readIndex]) || (item == (mSize - 1))) {
            mData[setIdx] = t;
            bFound = true;
          }
        }
      }
    }
    mEnd = (mEnd + 1) % Size;

    mSize = std::min(mSize + 1, Size);
  }
  size_t begin() {
    return mSize == Size ? mEnd : 0;
  }
  size_t end() {
    return mEnd;
  }
  size_t size() {
    return mSize;
  }
  void printRaw() {
    std::cout << "printRaw" << std::endl;
    for (auto& val : mData) {
      std::cout << val << std::endl;
    }
  }

  void printSortMaxToMin() {
    size_t readIndex = (mEnd + Size - 1) % Size;
    for (size_t item = 0; item < mSize; ++item) {
      std::cout << mData[readIndex] << std::endl;
      readIndex = (readIndex + Size - 1) % Size;
    }
  }

  std::array<Type, Size> getSortMaxToMin() {
    std::array<Type, Size> ret;
    size_t readIndex = (mEnd + Size - 1) % Size;
    int count{};
    for (size_t item = 0; item < mSize; ++item) {
      ret[count++] = mData[readIndex];
      readIndex = (readIndex + Size - 1) % Size;
    }
    return ret;
  }

  void printSortMinToMax() {
    size_t readIndex = begin();
    for (size_t item = 0; item < mSize; ++item) {
      readIndex = (readIndex + 1) % Size;
    }
  }

 private:
  std::array<Type, Size> mData{};
  size_t mEnd{};
  size_t mSize{};
};
