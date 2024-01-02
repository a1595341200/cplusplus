#ifndef TEMPLATE_IMPL_H
#define TEMPLATE_IMPL_H

#include <iostream>

template <typename T>
TemplateClass<T>::TemplateClass(T value) : value_(value) {}

template <typename T>
void TemplateClass<T>::PrintValue() {
  std::cout << "Value: " << value_ << std::endl;
}

#endif  // TEMPLATE_IMPL_H
