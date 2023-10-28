/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 17:36:56
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 17:39:33
 * @FilePath: /cplusplus/src/regex/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <regex>
#include <string>

#include <gtest/gtest.h>

TEST(regex, regex_search) {
  std::string s = "for a good time, call 867-5309 999";
  std::regex phone_regex("\\d{3}-\\d{4}");
  std::smatch phone_match;

  if (std::regex_search(s, phone_match, phone_regex)) {
    std::string fmt_s = phone_match.format(
        "$`"    // $` 意味着匹配之前的字符
        "[$&]"  // $& 意味着匹配的字符
        "$'");  // $' 意味着后随匹配的字符
    SLOG(INFO) << fmt_s << '\n';
  }
}

TEST(regex, regex_match) {
  // std::string s("+CSQ: 20,99");
  // auto it = s.find(' ');
  // auto p = s.substr(it + 1, s.size() - it);
  // SLOG(INFO) << p << '\n';
  std::smatch m;
  std::string str("+CSQ: 20,99");
  std::string str2("+CREG: 1,1");
  std::regex r("\\+CSQ: (\\d{1,2}),.*");
  std::regex r1("\\+CREG: .*,(\\d*)");

  if (!std::regex_match(str, m, r)) {
    return;
  }
  SLOG(INFO) << "size" << m.size() << std::endl;
  for (int i = 0; i <= m.size(); i++) {
    SLOG(INFO) << "i: " << i << std::endl;
    SLOG(INFO) << m[i].str() << std::endl;
  }
}

TEST(regex, sregex_iterator) {
  std::string s("+CSQ: 20,99");
  std::string r("([0-9]{1,2})");
  std::regex re(r);
  auto words_begin = std::sregex_iterator(s.begin(), s.end(), re);
  auto words_end = std::sregex_iterator();

  for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
    std::smatch match = *i;
    auto p = match.prefix();
    std::string match_str = match.str();
    SLOG(INFO) << match_str << '\n';
  }
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
