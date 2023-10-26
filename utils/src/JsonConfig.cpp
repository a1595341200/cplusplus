#include "JsonConfig.h"

#include <fstream>
#include <iostream>
namespace Utils {

int JsonConfig::getInt(const std::string &key, const int &defaultValue) {
  return mConfig.at(nlohmann::json::json_pointer(key));
}

double JsonConfig::getDouble(const std::string &key, const double &defaultValue) {
  return mConfig.at(nlohmann::json::json_pointer(key));
}

float JsonConfig::getFloat(const std::string &key, const float &defaultValue) {
  return mConfig.at(nlohmann::json::json_pointer(key));
}

std::string JsonConfig::getString(const std::string &key, const std::string &defaultValue) {
  return mConfig.at(nlohmann::json::json_pointer(key));
}

void JsonConfig::init() {
  std::ifstream file(mFilePath);
  if (file.is_open()) {
    mConfig = nlohmann::json::parse(file);
  }
  std::cout << mConfig.flatten() << std::endl;
}

};  // namespace Utils
