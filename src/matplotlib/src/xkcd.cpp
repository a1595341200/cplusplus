/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-12-11 10:22:05
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-12-11 10:22:08
 * @FilePath: /cplusplus/src/matplotlib/src/xkcd.cpp
 * @Description: 
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */
#define _USE_MATH_DEFINES
#include <cmath>
#include "matplotlibcpp.h"
#include <vector>

namespace plt = matplotlibcpp;

int main() {
    std::vector<double> t(1000);
    std::vector<double> x(t.size());

    for(size_t i = 0; i < t.size(); i++) {
        t[i] = i / 100.0;
        x[i] = sin(2.0 * M_PI * 1.0 * t[i]);
    }

    plt::xkcd();
    plt::plot(t, x);
    plt::title("AN ORDINARY SIN WAVE");
    plt::show();
}

