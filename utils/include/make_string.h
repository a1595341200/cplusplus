/**
 * @file make_string.h
 * @author liying (ying.li@jicaai.com) JICA
 * @brief
 * @version 0.1
 * @date 2022-08-18
 *
 * @copyright Copyright (c) 2022
 *
 * Copyright (c) JICA Corporation. All rights reserved.
 */

#pragma once

#include <locale>
#include <sstream>
#include <type_traits>

namespace jica {

namespace detail {

inline void MakeStringImpl(std::ostringstream& /*ss*/) noexcept {}

template <typename T>
inline void MakeStringImpl(std::ostringstream& ss, const T& t) noexcept {
  ss << t;
}

template <typename T, typename... Args>
inline void MakeStringImpl(std::ostringstream& ss, const T& t, const Args&... args) noexcept {
  MakeStringImpl(ss, t);
  MakeStringImpl(ss, args...);
}

// see MakeString comments for explanation of why this is necessary
template <typename... Args>
inline std::string MakeStringImpl(const Args&... args) noexcept {
  std::ostringstream ss;
  MakeStringImpl(ss, args...);
  return ss.str();
}

//
// Infrastructure to convert char[n] to char* to reduce binary size
//

// default is to leave the type as is
template <class T>
struct if_char_array_make_ptr {
  using type = T;
};

// specialization that matches an array reference, which is what the char array from a string
// literal used in a call to MakeString will be. if the type is a char[n] array we 'decay' it to a
// char* so that the usages can be folded.
template <class T, size_t N>
struct if_char_array_make_ptr<T (&)[N]> {
  // remove a single extent (T[x] -> T, but T[x][y] -> T[y]) so we only match char[x],
  // and get the type name without the 'const' so both 'const char (&)[n]' and 'char (&)[n]' are
  // matched.
  using element_type = typename std::remove_const<typename std::remove_extent<T>::type>::type;
  using type =
      typename std::conditional<std::is_same<char, element_type>::value, T*, T (&)[N]>::type;
};

// helper to make usage simpler in MakeString
template <class T>
using if_char_array_make_ptr_t = typename if_char_array_make_ptr<T>::type;
}  // namespace detail

/**
 * Makes a string by concatenating string representations of the arguments.
 * This version uses the current locale.
 */
template <typename... Args>
std::string MakeString(const Args&... args) {
  // We need to update the types from the MakeString template instantiation to decay any char[n] to
  // char*.
  //   e.g. MakeString("in", "out") goes from MakeString<char[2], char[3]> to MakeStringImpl<char*,
  //   char*>
  //        so that MakeString("out", "in") will also match MakeStringImpl<char*, char*> instead of
  //        requiring MakeStringImpl<char[3], char[2]>.
  //
  // We have to do the type processing before any actual work, so this function purely implements
  // the type processing. If we do not do it this way we do not get the full binary size reduction.
  //
  // See https://stackoverflow.com/a/29418212/684911 for overall details of the approach, but note
  // it does not cover the need to do the type processing as a separate step.

  return detail::MakeStringImpl(detail::if_char_array_make_ptr_t<Args const&>(args)...);
}

/**
 * Makes a string by concatenating string representations of the arguments.
 * This version uses std::locale::classic().
 */
template <typename... Args>
std::string MakeStringWithClassicLocale(const Args&... args) {
  std::ostringstream ss;
  ss.imbue(std::locale::classic());
  detail::MakeStringImpl(ss, args...);
  return ss.str();
}

inline void split(const std::string& str, const std::string& delim, std::vector<std::string>& res) {
  if (str.empty()) {
    return;
  }

  res.clear();
  std::string::size_type start = str.find_first_not_of(delim, 0);
  std::string::size_type pos = str.find_first_of(delim, start);

  while (std::string::npos != start || std::string::npos != pos) {
    res.emplace_back(str.substr(start, pos - start));
    start = str.find_first_not_of(delim, pos);
    pos = str.find_first_of(delim, start);
  }
}

// MakeString versions for already-a-string types.

inline std::string MakeString(const std::string& str) {
  return str;
}

inline std::string MakeString(const char* cstr) {
  return cstr;
}

inline std::string MakeStringWithClassicLocale(const std::string& str) {
  return str;
}

inline std::string MakeStringWithClassicLocale(const char* cstr) {
  return cstr;
}

}  // namespace jica
