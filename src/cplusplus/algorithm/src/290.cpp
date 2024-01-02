#include <iostream>
#include <unordered_map>
#include <vector>
#include "dbg.h"
using namespace std;

class Solution {
 public:
  bool wordPattern(string pattern, string s) {
    std::unordered_map<char, std::string> patternToS;
    std::unordered_map<std::string, char> sToPattern;
    std::vector<std::string> tmp;
    std::string str;

    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == ' ') {

        }
    }

    for (int i = 0; i < pattern.size(); ++i) {
      if (!patternToS.count(pattern[i])) {
        patternToS[pattern[i]] = tmp[i];
      }

      if (patternToS[pattern[i]] != tmp[i]) {
        return false;
      }

      if (!sToPattern.count(tmp[i])) {
        sToPattern[tmp[i]] = pattern[i];
      }

      if (sToPattern[tmp[i]] != pattern[i]) {
        return false;
      }
    }
    return true;
  }
};

int main() {
  Solution sol;
  std::cout << sol.wordPattern("abba", "dog cat cat dog") << std::endl;
  std::cout << sol.wordPattern("abba", "dog cat cat fish") << std::endl;
  std::cout << sol.wordPattern("aaaa", "dog cat cat dog") << std::endl;
  std::cout << sol.wordPattern("abba", "dog dog dog dog") << std::endl;
  return 0;
}
