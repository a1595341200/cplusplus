/**
 * @file exceptions.h
 * @author liying (ying.li@jicaai.com)
 * @brief
 * @version 0.1
 * @date 2022-08-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <algorithm>
#include <exception>
#include <iterator>
#include <stdexcept>
#include <string>
#include <vector>

#include "code_location.h"

namespace jica {

class NotImplementedException : public std::logic_error {
 public:
  explicit NotImplementedException(const char* _Message = "Function not yet implemented") noexcept
      : std::logic_error(_Message){};
  explicit NotImplementedException(
      const std::string& _Message = "Function not yet implemented") noexcept
      : std::logic_error(_Message){};
};

class TypeMismatchException : public std::logic_error {
 public:
  TypeMismatchException() noexcept : logic_error("Type mismatch"){};
};

class RuntimeException : public std::exception {
 public:
  RuntimeException(const CodeLocation& location, const std::string& msg) noexcept
      : RuntimeException(location, nullptr, msg) {}

  /**
     Create a new exception that captures the location it was thrown from.
     @param location Location in the source code the exception is being thrown from
     @param failed_condition Optional string containing the condition that failed.
     e.g. "tensor.Size() == input.Size()". May be nullptr.
     @param msg Message containing additional information about the exception cause.
  */
  RuntimeException(const CodeLocation& location, const char* failed_condition,
                   const std::string& msg)
      : location_{location} {
    std::ostringstream ss;

    ss << location.ToString(
        CodeLocation::kFilenameAndPath);  // output full path in case just the filename is ambiguous
    if (failed_condition != nullptr) {
      ss << " " << failed_condition << " was false.";
    }

    ss << " " << msg << "\n";
    if (!location.stacktrace.empty()) {
      ss << "Stacktrace:\n";
      // skip the first entry in the stacktrace as we have that information from location.ToString()
      std::copy(++location.stacktrace.begin(), location.stacktrace.end(),
                std::ostream_iterator<std::string>(ss, "\n"));
    }

    what_ = ss.str();
  }

  const char* what() const noexcept override {
    return what_.c_str();
  }

 private:
  const CodeLocation location_;
  const std::vector<std::string> stacktrace_;
  std::string what_;
};

}  // namespace jica
