#pragma once
#include <nlohmann/json.hpp>

#include "ConfigBase.h"
namespace Utils {
class JsonConfig : public ConfigBase {
 public:
  using ConfigBase::ConfigBase;
  void init() override;
  int getInt(const std::string &key, const int &defaultValue = 0) override;
  double getDouble(const std::string &key, const double &defaultValue = 0.0) override;
  float getFloat(const std::string &key, const float &defaultValue = 0.0) override;
  std::string getString(const std::string &key, const std::string &defaultValue = {}) override;

  auto get(const std::string &key) {
    return mConfig.at(nlohmann::json::json_pointer(key));
  }

 private:
  nlohmann::json mConfig;
};
};  // namespace Utils
