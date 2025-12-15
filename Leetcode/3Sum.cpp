//
// Created by Administrator on 15/12/2025.
//
#include "3Sum.h"

#include <algorithm>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    if (nums.size() < 3) {
        return result;
    }
    std::sort(nums.begin(), nums.end());
    int left, right;
    for (int i = 0; i <= nums.size() - 3; i++) {
        if (nums[i] > 0) break;
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        left = i + 1;
        right = nums.size() - 1;
        int target = -nums[i];
        while (left < right) {
            int twoSum = nums[left] + nums[right];
           if (twoSum == target) {
               result.push_back({nums[i], nums[left], nums[right]});

               while (left < right && nums[left] == nums[left + 1]) {
                   left++;
               }
               while (left < right && nums[right] == nums[right - 1]) {
                   right--;
               }

               left++;
               right--;
           } else if (twoSum < target) {
               left++;
           } else {
               right--;
           }
        }
    }
    return result;
}