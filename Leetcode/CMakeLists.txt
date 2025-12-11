cmake_minimum_required(VERSION 4.0)
project(Leetcode)

set(CMAKE_CXX_STANDARD 20)

add_executable(Leetcode main.cpp
        TwoSum.cpp
        TwoSum.h
        LongestSubstringWithoutRepeating.h
        LongestSubstringWithoutRepeating.cpp
        LongestPalindromicSubstring.h
        LongestPalindromicSubstring.cpp
        CloneGraph.h
        CloneGraph.cpp
        PalindromicSubstring.h
        PalindromicSubstring.cpp
        ContainerWithMostWater.h
        ContainerWithMostWater.cpp)
