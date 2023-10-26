#include <Log.h>
#include <Utils.h>

#include <gtest/gtest.h>

#include "JsonConfig.h"

TEST(JsonConfig, 1) {
  std::shared_ptr<Utils::ConfigBase> config =
      std::make_shared<Utils::JsonConfig>("/home/user/cplusplus/utils/test/config.json");
  config->init();
  std::string res = config->getString("/name");
  ASSERT_EQ(res, "user");
  auto age = config->getInt("/age");
  ASSERT_EQ(age, 30);
  int array0 = config->getInt("/array/0");
  SLOG(INFO) << array0;
  ASSERT_EQ(array0, 1);
  auto array = dynamic_cast<Utils::JsonConfig*>(config.get())->get("/array");
  std::cout << array << std::endl;
  Utils::lookType(array);
}
