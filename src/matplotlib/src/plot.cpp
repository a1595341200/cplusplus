#define _USE_MATH_DEFINES
#include <cmath>
#include "sstream"
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

void plotLine(const std::vector<double>& x, const std::vector<double>& y) {
  std::map<std::string, std::string> keywords;
  keywords["color"] = "red";
  plt::plot(x, y, keywords);
}

void plotRect(double x, double y, double w, double h) {
  std::vector<double> xs, ys;
  plotLine({x, x + w}, {y, y});
  plotLine({x + w, x + w}, {y, y - h});
  plotLine({x + w, x}, {y - h, y - h});
  plotLine({x, y}, {y - h, y});
}

int main() {
   int n = 100;
  for (int i = 0; i < n; i++) {
    plt::clf();
    plt::ylim(-10, n);
    plt::xlim(-10, n);
    plotRect(i + 3, i + 3, 2, 2);
    plotRect(i, i, 2, 2);
    plotRect(i - 3, i - 3, 2, 2);
    std::stringstream  s;
    s << i << " : " << i;
    plt::text(i,i,s.str());
    plt::title("Sample figure");
    //  plt::show();
    plt::pause(0.01);
  }
  plt::show();
}
