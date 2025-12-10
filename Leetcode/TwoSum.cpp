#include "TwoSum.h"

#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &nums, int target) {
    //Step 1
    //What dsa to use: Two Pointer
    //Use two element to iterate through the array
    //i. add two element to equal target
        //if it equals, return result
        //if not equals, return {}
    // for (int i = 0; i < nums.size(); i++) {
    //     for (int j = i + 1; j < nums.size(); j++) {
    //         if (nums[i] + nums[j] == target) {
    //             return {i, j};
    //         }
    //     }
    // }
    //Step 2
    //Loop through array with element
    //Calculate complement by substracting from target and elements in array
    std::unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.count(complement)) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}

