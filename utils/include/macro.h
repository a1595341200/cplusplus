#pragma once

#include "exceptions.h"
#include "make_string.h"

#ifndef EPCV_EXPORT
#ifdef _MSC_VER
#define EPCV_EXPORT __declspec(dllexport)
#else
#define EPCV_EXPORT __attribute__((visibility("default")))
#endif
#endif

#ifndef EPCV_API
#ifdef EPCV_API_EXPORTS
#define EPCV_API EPCV_EXPORT
#else
#define EPCV_API
#endif
#endif

#ifndef CHECK_RETURN_W_MSG
#define CHECK_RETURN_W_MSG(status, val) \
  do {                                  \
    auto ret = (status);                \
    if (!ret) {                         \
      AERROR << #status << " failed";   \
      return val;                       \
    }                                   \
  } while (0)
#endif

#ifdef _WIN32
#define EPCV_UNUSED_PARAMETER(x) (x)
#else
#define EPCV_UNUSED_PARAMETER(x) (void)(x)
#endif

#ifndef PRINT_VECTOR
#define PRINT_VECTOR(vec, line_endl)              \
  {                                               \
    std::stringstream ss;                         \
    ss << #vec << ":" << vec.size() << std::endl; \
    for (size_t i = 0; i < vec.size(); i++) {     \
      ss << vec[i] << line_endl;                  \
    }                                             \
    AINFO << ss.str();                            \
  }

#ifndef WRITE_VECTOR_TO_FILE
#define WRITE_VECTOR_TO_FILE(vec, file_name)  \
  {                                           \
    std::fstream file;                        \
    AINFO << file_name;                       \
    file.open(file_name, std::ios::out);      \
    file << vec.size() << std::endl;          \
    for (size_t i = 0; i < vec.size(); i++) { \
      file << vec[i] << std::endl;            \
    }                                         \
    file.close();                             \
  }
#endif

#ifndef WRITE_VECTOR_2D_TO_FILE
#define WRITE_VECTOR_2D_TO_FILE(vec, file_name)              \
  {                                                          \
    std::fstream file;                                       \
    AINFO << file_name;                                      \
    file.open(file_name, std::ios::out);                     \
    file << vec.size() << " " << vec[0].size() << std::endl; \
    for (size_t i = 0; i < vec.size(); i++) {                \
      for (size_t j = 0; j < vec[i].size(); j++) {           \
        file << vec[i][j] << " ";                            \
      }                                                      \
      file << std::endl;                                     \
    }                                                        \
    file.close();                                            \
  }
#endif

#define PRINT_VECTOR_WITH_INFO(vec, info, line_endl) \
  {                                                  \
    std::stringstream ss;                            \
    ss << info << ":\n";                             \
    for (size_t i = 0; i < vec.size(); i++) {        \
      ss << vec[i] << line_endl;                     \
    }                                                \
    AINFO << ss.str();                               \
  }
#endif

#ifdef NDEBUG
#define PRINT_LIYING AINFO << "Now is Release !!!!!!!!!!!!!!!!";
#else
#define PRINT_LIYING AINFO << "Now is debug !!!!!!!!!!!!!!!!";
#endif

#ifdef NDEBUG
#define VECTOR_INDEX(vec, idx) vec[idx]
#else
#define VECTOR_INDEX(vec, idx) vec.at(idx)
#endif

#define COMPARE_DOUBLE(a, b, thresh) (((a - b) < thresh) && (a - b) > -thresh)

// Capture where a message is coming from. Use __FUNCTION__ rather than the much longer
// __PRETTY_FUNCTION__
#define EPCV_WHERE ::jica::CodeLocation(__FILE__, __LINE__, __FUNCTION__)

// Throw an exception with optional message.
// NOTE: The arguments get streamed into a string via ostringstream::operator<<
// DO NOT use a printf format string, as that will not work as you expect.
#define EPCV_THROW(...) throw ::jica::RuntimeException(EPCV_WHERE, ::jica::MakeString(__VA_ARGS__))

// Just in order to mark things as not implemented. Do not use in final code.
#define EPCV_NOT_IMPLEMENTED(...)        \
  throw ::jica::NotImplementedException( \
      ::jica::MakeString(__FILE__, ":", __LINE__, " ", __func__, ":", __VA_ARGS__))

// Check condition.
// NOTE: The arguments get streamed into a string via ostringstream::operator<<
// DO NOT use a printf format string, as that will not work as you expect.
#define EPCV_ENFORCE(condition, ...)                                                           \
  do {                                                                                         \
    if (!(condition)) {                                                                        \
      throw ::jica::RuntimeException(EPCV_WHERE, #condition, ::jica::MakeString(__VA_ARGS__)); \
    }                                                                                          \
  } while (false)

#define MAKE_PRINT_PARAMS(val) #val << ":" << val << " "

#define PRINT_PARAMS(val1) AINFO << MAKE_PRINT_PARAMS(val1);
#define PRINT_PARAMS_2(val1, val2) AINFO << MAKE_PRINT_PARAMS(val1) << MAKE_PRINT_PARAMS(val2);
#define PRINT_PARAMS_3(val1, val2, val3) \
  AINFO << MAKE_PRINT_PARAMS(val1) << MAKE_PRINT_PARAMS(val2) << MAKE_PRINT_PARAMS(val3);
#define PRINT_PARAMS_4(val1, val2, val3, val4)                                           \
  AINFO << MAKE_PRINT_PARAMS(val1) << MAKE_PRINT_PARAMS(val2) << MAKE_PRINT_PARAMS(val3) \
        << MAKE_PRINT_PARAMS(val4);
#define PRINT_PARAMS_5(val1, val2, val3, val4, val5)                                     \
  AINFO << MAKE_PRINT_PARAMS(val1) << MAKE_PRINT_PARAMS(val2) << MAKE_PRINT_PARAMS(val3) \
        << MAKE_PRINT_PARAMS(val4) << MAKE_PRINT_PARAMS(val5);
#define PRINT_PARAMS_6(val1, val2, val3, val4, val5, val6)                               \
  AINFO << MAKE_PRINT_PARAMS(val1) << MAKE_PRINT_PARAMS(val2) << MAKE_PRINT_PARAMS(val3) \
        << MAKE_PRINT_PARAMS(val4) << MAKE_PRINT_PARAMS(val5) << MAKE_PRINT_PARAMS(val6);
#define PRINT_PARAMS_7(val1, val2, val3, val4, val5, val6, val7)                         \
  AINFO << MAKE_PRINT_PARAMS(val1) << MAKE_PRINT_PARAMS(val2) << MAKE_PRINT_PARAMS(val3) \
        << MAKE_PRINT_PARAMS(val4) << MAKE_PRINT_PARAMS(val5) << MAKE_PRINT_PARAMS(val6) \
        << MAKE_PRINT_PARAMS(val7);
#define PRINT_PARAMS_8(val1, val2, val3, val4, val5, val6, val7, val8)                   \
  AINFO << MAKE_PRINT_PARAMS(val1) << MAKE_PRINT_PARAMS(val2) << MAKE_PRINT_PARAMS(val3) \
        << MAKE_PRINT_PARAMS(val4) << MAKE_PRINT_PARAMS(val5) << MAKE_PRINT_PARAMS(val6) \
        << MAKE_PRINT_PARAMS(val7) << MAKE_PRINT_PARAMS(val8);
#define PRINT_PARAMS_9(val1, val2, val3, val4, val5, val6, val7, val8, val9)             \
  AINFO << MAKE_PRINT_PARAMS(val1) << MAKE_PRINT_PARAMS(val2) << MAKE_PRINT_PARAMS(val3) \
        << MAKE_PRINT_PARAMS(val4) << MAKE_PRINT_PARAMS(val5) << MAKE_PRINT_PARAMS(val6) \
        << MAKE_PRINT_PARAMS(val7) << MAKE_PRINT_PARAMS(val8) << MAKE_PRINT_PARAMS(val9);
