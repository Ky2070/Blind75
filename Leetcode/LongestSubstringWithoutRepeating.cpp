#include <string>
#include "LongestSubstringWithoutRepeating.h"

#include <algorithm>
#include <map>
#include <vector>

int lengthOfLongestSubstring(std::string s) {
    //input
    /*
     We are given a string
     */
    //What DS/Algo/Technique
    /*
     */
    //What to do with the data
    /*
     Find the length of the longest substring without repeating characters
     */
    //Output
    /*
     */
    std::vector<int> last(256, -1); // last seen of char in string s
    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        unsigned char c = s[right];
        if (last[c] >= left) {
            left = last[c] + 1;
        }
        last[c] = right;
        maxLen = std::max(maxLen, right - left + 1);
    }
    return maxLen;
}
