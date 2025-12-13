#include "WorkBreak.h"

#include <iostream>
#include <ostream>
#include <string>
#include <unordered_set>

bool workBreak(std::string s, std::vector<std::string> &wordDict) {
    int n = s.length();

    //dp[i] = true if s[0..i-1] can split;
    std::vector<char> dp(n + 1, false);
    dp[0] = true; //string "" can valid

    std::unordered_set<std::string> dict(wordDict.begin(), wordDict.end());
    for (const auto& word : wordDict) {
        std::cout << word << " ";
    }
    std::cout << std::endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (dp[j] && dict.count(s.substr(j, i - j))) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];

}
