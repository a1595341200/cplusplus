#ifndef TEMPLATE_H
#define TEMPLATE_H

template <typename T>
class TemplateClass {
 public:
  TemplateClass(T value);
  void PrintValue();

 private:
  T value_;
};

#include "template_impl.h"  // 引入模板实现

#endif  // TEMPLATE_H