/*
 * @Author: 谢瑶
 * @Date: 2023-10-12 09:46:26
 * @LastEditors: 谢瑶
 * @LastEditTime: 2023-10-12 10:16:19
 * @FilePath: /cplusplus/src/fastcsv/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <csv.h>

#include <vector>

#include <gtest/gtest.h>

struct Data {
  int id{};
  double startTimeStamp{};
  double stopTimeStamp{};
  std::string type;
  std::string speed;
  std::string time;
};

std::vector<Data> getDatas(std::string csvPath) {
  io::CSVReader<6> in(csvPath);
  in.read_header(io::ignore_extra_column, "id", "startTimeStamp", "stopTimeStamp", "type", "speed",
                 "time");
  std::vector<Data> datas;
  Data data;
  while (in.read_row(data.id, data.startTimeStamp, data.stopTimeStamp, data.type, data.speed,
                     data.time)) {
    std::cout << std::fixed << data.id << " " << data.startTimeStamp << " " << data.stopTimeStamp
              << " " << data.type << " " << data.speed << " " << data.time << std::endl;
    datas.emplace_back(data);
  }
  return datas;
}

TEST(csv, read) {
  getDatas("/Users/xieyao/Desktop/work/cplusplus/src/fastcsv/data/test.csv");
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
