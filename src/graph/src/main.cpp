/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-22 10:19:16
 * @LastEditors: 谢瑶
 * @LastEditTime: 2023-10-12 09:44:21
 * @FilePath: /cplusplus/src/graph/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Utils.h>
#include <dbg.h>

#include <iostream>
#include <list>
#include <vector>

#include <gtest/gtest.h>
using namespace std;
TEST(graph, 1) {
  vector<vector<int>> graph(4, vector<int>(4));
  graph[0][1] = 1;
  graph[1][0] = 1;
  graph[1][2] = 1;
  graph[2][1] = 1;
  graph[2][3] = 1;
  graph[3][2] = 1;
  Utils::print2DArray(graph);
}
struct Node {
  Node(int i, int j) : id(i), val(j) {}
  int id{};
  int val{};
};
ostream& operator<<(ostream& os, const Node& node) {
  os << "node (" << node.id << ") : " << node.val;
  return os;
}
TEST(graph, 2) {
  vector<list<Node>> graph(4);
  Utils::lookType<decltype(graph)>();
  graph[0].emplace_back(1, 1);
  graph[0].emplace_back(3, 1);
  graph[1].emplace_back(2, 1);
  graph[2].emplace_back(3, 1);
  dbg(graph);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
