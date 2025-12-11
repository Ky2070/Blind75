//
// Created by Administrator on 11/12/2025.
//
#include "ContainerWithMostWater.h"

int maxArea(std::vector<int>& height) {
    int n = (int)height.size();
    int left = 0, right = n - 1;
    long long best = 0;
    while (left < right) {
        long long h = std::min(height[left], height[right]);
        long long w = (long long) (right - left);
        long long area = h * w;
        if (area > best) {
            best = area;
        }
        if (height[left] < height[right]) {
            ++left;
        }
        else {
            --right;
        }
    }
    return best;
}