#pragma once
#include <memory>
#include <vector>

namespace Utils {
class ConfigBase {
 public:
  ConfigBase(const std::string &filePath) : mFilePath(filePath) {}
  virtual void init() = 0;
  virtual int getInt(const std::string &key, const int &defaultValue = 0) = 0;
  virtual double getDouble(const std::string &key, const double &defaultValue = 0.0) = 0;
  virtual float getFloat(const std::string &key, const float &defaultValue = 0.0) = 0;
  virtual std::string getString(const std::string &key, const std::string &defaultValue = {}) = 0;

 protected:
  std::string mFilePath;
};

}  // namespace Utils
