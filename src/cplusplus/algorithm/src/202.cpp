#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
class Solution {
 public:
  static vector<int> parse(int n) {
    vector<int> res;
    while (n != 0) {
      res.emplace_back(n % 10);
      n /= 10;
    }
    return res;
  }
  static int compute(const vector<int>& val) {
    auto res = std::accumulate(val.begin(), val.end(), 0, [](int res, int v) {
      res += std::pow(v, 2);
      return res;
    });
    return res;
  }
  static bool isHappy(int n) {
    int val = n;
    int count{};
    while (true) {
      if (val == 1) {
        return true;
      }
      val = compute(parse(val));
      count++;
      std::cout << val << std::endl;
      if (count > 2 && val == 4) {
        break;
      }
    }
    return false;
  }
};

int main() {
  Solution sol;
  std::cout << sol.isHappy(3) << std::endl;
  return 0;
}
