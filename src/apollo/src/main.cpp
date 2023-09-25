/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-22 20:01:07
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-25 16:49:15
 * @FilePath: /cplusplus/src/apollo/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <Utils.h>
#include <dbg.h>

#include <iostream>
#include <queue>

#include <gtest/gtest.h>

#include "modules/perception/common/graph/secure_matrix.h"

// #include "secure_matrix.h"
int rows_num_ = 10;
int cols_num_ = 8;
// template <typename T>
// void ComputeConnectedComponents(std::vector<std::vector<size_t>>* row_components,
//                                 std::vector<std::vector<size_t>>* col_components) {
//   std::vector<std::vector<int>> nb_graph;
//   //   nb_graph.resize(rows_num_ + cols_num_);
//   //   for (size_t i = 0; i < rows_num_; ++i) {
//   //     for (size_t j = 0; j < cols_num_; ++j) {
//   //       if (is_valid_cost_(global_costs_(i, j))) {
//   //         nb_graph[i].push_back(static_cast<int>(rows_num_) + j);
//   //         nb_graph[j + rows_num_].push_back(i);
//   //       }
//   //     }
//   //   }

//   //   std::vector<std::vector<int>> components;
//   //   ConnectedComponentAnalysis(nb_graph, &components);
//   //   row_components->clear();
//   //   row_components->resize(components.size());
//   //   col_components->clear();
//   //   col_components->resize(components.size());
//   //   for (size_t i = 0; i < components.size(); ++i) {
//   //     for (size_t j = 0; j < components[i].size(); ++j) {
//   //       int id = components[i][j];
//   //       if (id < static_cast<int>(rows_num_)) {
//   //         row_components->at(i).push_back(id);
//   //       } else {
//   //         id -= static_cast<int>(rows_num_);
//   //         col_components->at(i).push_back(id);
//   //       }
//   //     }
//   //   }
// }

void ConnectedComponentAnalysis(const std::vector<std::vector<int>>& graph,
                                std::vector<std::vector<int>>* components) {
  if (components == nullptr) {
    SLOG(INFO) << "components is not available";
    return;
  }
  int num_item = static_cast<int>(graph.size());
  std::vector<int> visited;
  visited.resize(num_item, 0);
  std::queue<int> que;
  std::vector<int> component;
  component.reserve(num_item);
  components->clear();

  for (int index = 0; index < num_item; ++index) {
    if (visited[index]) {
      continue;
    }
    component.push_back(index);
    que.push(index);
    visited[index] = 1;
    while (!que.empty()) {
      int current_id = que.front();
      que.pop();
      dbg(current_id);
      for (size_t sub_index = 0; sub_index < graph[current_id].size(); ++sub_index) {
        int neighbor_id = graph[current_id][sub_index];
        dbg(sub_index);
        dbg(neighbor_id);
        if (visited[neighbor_id] == 0) {
          component.push_back(neighbor_id);
          dbg(component);
          dbg(neighbor_id);
          que.push(neighbor_id);
          visited[neighbor_id] = 1;
        } else {
          dbg("can not access");
        }
      }
    }
    components->push_back(component);
    component.clear();
  }
  dbg(*components);
}

// 0     0
// 1     1
// 2     2
// 3     3
// 4     4
// 5     5
// 6     6
// 7     7
// 8
// 9
TEST(apollo, 1) {
  std::vector<std::vector<int>> nb_graph;
  std::vector<std::vector<int>> association_mat(rows_num_, std::vector<int>(cols_num_, 0));
  association_mat[0][0] = 1;
  association_mat[0][1] = 1;
  association_mat[0][2] = 1;
  association_mat[1][2] = 1;
  association_mat[1][3] = 1;

  apollo::perception::common::SecureMat<int> global_costs_{};
  global_costs_.Reserve(rows_num_, cols_num_);
  for (int r_i = 0; r_i < rows_num_; r_i++) {
    for (int c_i = 0; c_i < cols_num_; c_i++) {
      global_costs_(r_i, c_i) = static_cast<int>(association_mat[r_i][c_i]);
    }
  }
  dbg(association_mat);
  nb_graph.resize(rows_num_ + cols_num_);
  SLOG(INFO) << nb_graph.size();
  for (size_t i = 0; i < rows_num_; ++i) {
    for (size_t j = 0; j < cols_num_; ++j) {
      if (global_costs_(i, j) == 1) {
        SLOG(INFO) << i << " " << static_cast<int>(rows_num_) + j;
        SLOG(INFO) << j + rows_num_ << " " << i;
        nb_graph[i].push_back(static_cast<int>(rows_num_) + j);
        nb_graph[j + rows_num_].push_back(i);
      }
    }
  }
  dbg(nb_graph);
  // print2DArray(nb_graph);
  std::vector<std::vector<int>> row_components;
  std::vector<std::vector<int>> col_components;
  std::vector<std::vector<int>> components;
  ConnectedComponentAnalysis(nb_graph, &components);
  row_components.clear();
  row_components.resize(components.size());
  col_components.clear();
  col_components.resize(components.size());
  for (size_t i = 0; i < components.size(); ++i) {
    for (size_t j = 0; j < components[i].size(); ++j) {
      int id = components[i][j];
      if (id < static_cast<int>(rows_num_)) {
        row_components.at(i).push_back(id);
      } else {
        id -= static_cast<int>(rows_num_);
        col_components.at(i).push_back(id);
      }
    }
  }
  dbg(row_components);
  dbg(col_components);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
