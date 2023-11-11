/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-27 17:27:25
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 17:27:26
 * @FilePath: /cplusplus/utils/test/Config_tests.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <Utils.h>

#include <gtest/gtest.h>

#include "JsonConfig.h"

TEST(JsonConfig, 1) {
  std::shared_ptr<Utils::ConfigBase> config =
      std::make_shared<Utils::JsonConfig>("./utils/test/config.json");
  config->init();
  std::string res = config->getString("/name");
  ASSERT_EQ(res, "user");
  auto age = config->getInt("/age");
  ASSERT_EQ(age, 30);
  int array0 = config->getInt("/array/0");
  SLOG(INFO) << array0;
  ASSERT_EQ(array0, 1);
  auto array = dynamic_cast<Utils::JsonConfig*>(config.get())->get("/array");
  Utils::lookType(array);
}
