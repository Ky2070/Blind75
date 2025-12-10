#include "LongestPalindromicSubstring.h"

std::string longestPalindromic(const std::string &s) {
    int n = s.length();
    //one char or space in string
    if (n <= 1) {
        return s;
    }
    int bestStart = 0;
    int bestLen = 1;
    for (int i = 1; i < n; i++) {
        //Odd length
        int left = i, right = i;
        //Expand from center
        while (left >= 0 && right < n && s[left] == s[right]) {
            int curLen = right - left + 1;
            if (curLen > bestLen) {
                bestLen = curLen;
                bestStart = left;
            }
            left--;
            right++;
        }

        //Even length
        left = i, right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            int curLen = right - left + 1;
            if (curLen > bestLen) {
                bestLen = curLen;
                bestStart = left;
            }
            left--;
            right++;
        }
    }
    return s.substr(bestStart, bestLen);
}
