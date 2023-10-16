#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "utils/json.hpp"
#include "utils/log.h"

using namespace std;
using Json = nlohmann::json;

class JsonParser {
 public:
  JsonParser() = default;
  JsonParser(const std::string &json_file) {
    ReadJsonFile(json_file);
  }
  ~JsonParser() = default;
  bool ReadJsonFile(const std::string &json_file) {
    ifstream jfile(json_file.c_str());
    if (!jfile.good()) {
      AWARN << json_file << "文件读取失败";
      return false;
    }
    jfile >> _json;
    _init = true;
    return true;
  }

  bool GetString(const std::string &key, std::string *value) {
    if (!_init) {
      return false;
    }
    const auto iter = _json.find(key);
    if (iter == _json.end()) {
      AWARN << "json文件不存在字段:" << key;
      return false;
    }
    if (!iter->is_string()) {
      AWARN << "json文件中" << key << "字段类型不为string";
      return false;
    }
    *value = *iter;
    return true;
  }

  template <class T>
  bool GetNumber(const std::string &key, T *value) {
    if (!_init) {
      return false;
    }
    const auto iter = _json.find(key);
    if (iter == _json.end()) {
      AWARN << "json文件不存在字段:" << key;
      return false;
    }
    if (!iter->is_number()) {
      AWARN << "json文件中" << key << "字段类型不为number";
      return false;
    }
    *value = *iter;
    return true;
  }

  bool GetBoolean(const std::string &key, bool *value) {
    if (!_init) {
      return false;
    }
    const auto iter = _json.find(key);
    if (iter == _json.end()) {
      AWARN << "json文件不存在字段:" << key;
      return false;
    }
    if (!iter->is_boolean()) {
      AWARN << "json文件中" << key << "字段类型不为boolean";
      return false;
    }
    *value = *iter;
    return true;
  }

 private:
  bool _init = false;
  Json _json;
};