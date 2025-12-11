//
// Created by Administrator on 11/12/2025.
//
#include "PalindromicSubstring.h"
#include <string>

//Expand from center
int expand(std::string s, int left, int right) {
    int localCount = 0;
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        localCount++;
        left--;
        right++;
    }
    return localCount;
}

int countSubstrings(std::string s) {
    int n = s.length();
    int count = 0;
    int left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        // odd palindrome
        count += expand(s, i, i);
        // even palindrome
        count += expand(s, i, i+1);
    }
    return count;
}