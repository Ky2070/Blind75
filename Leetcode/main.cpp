#include <algorithm>
#include <string>
#include <iostream>

#include "CloneGraph.h"
#include "TwoSum.h"
#include "LongestSubstringWithoutRepeating.h"
#include "LongestPalindromicSubstring.h"
#include "PalindromicSubstring.h"
#include "ContainerWithMostWater.h"
#include "WorkBreak.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    std::vector<int> nums = {2, 5, 7, 9};
    int target = 11;
    std::cout <<"Leetcode 1: Two Sum" <<std::endl;
    std::cout <<"------------------------------------" <<std::endl;
    auto result = twoSum(nums, target);
    std::cout<<"Indices found: ";
    std::cout<<result[0]<<" "<<result[1]<<std::endl;
    std::cout<<"====================================="<<std::endl;
    std::cout<<"Leetcode 3: Longest Substring Without Repeating Characters" <<std::endl;
    std::cout<<"------------------------------------" <<std::endl;
    std::string s = "abcdabacd";
    std::cout <<"Length longest substring without repeat: " << lengthOfLongestSubstring(s) << std::endl;
    std::cout <<"=====================================" <<std::endl;
    std::cout<<"Leetcode 5: Longest Palindromic Substring" <<std::endl;
    std::vector<std::string> tests = {"babad", "cbbd", ""};

    for (auto &t : tests) {
        std::cout << "s = \"" << t << "\" -> longest palindrome: \""
             << longestPalindromic(t) << "\"\n";
    }

    std::cout <<"=====================================" <<std::endl;
    std::cout <<"Leetcode 133: Clone Graph" << std::endl;
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);

    //Connect neighbors;
    n1->neighbors = {n2, n4};
    n2->neighbors = {n1, n3};
    n3->neighbors = {n2, n4};
    n4->neighbors = {n1, n3};

    Node* clone = cloneGraph(n1);

    std::cout<<"Original graph"<<std::endl;
    printGraph(n1);
    std::cout<<"Cloned graph"<<std::endl;
    printGraph(clone);

    std::cout <<"=====================================" <<std::endl;
    std::cout<<"Leetcode 647: Palindromic Substring" <<std::endl;
    std::string s1 = "ababca";
    std::string s2 = "aaa";
    std::string s3 = "abc";
    std::cout<<"1.Count palindromic substring: " <<countSubstrings(s1) << std::endl;
    std::cout<<"2.Count palindromic substring: " <<countSubstrings(s2) << std::endl;
    std::cout<<"3.Count palindromic substring: " <<countSubstrings(s3) << std::endl;
    std::vector<int> height = {1,8,6,2,5,4,8,3,7};
    std::cout<<"Most water of container: " << maxArea(height) << std::endl;
    std::cout <<"=====================================" <<std::endl;
    std::cout<<"Leetcode 139: Word Break" << std::endl;
    std::vector<std::string> wordDict = {"cats","dog","sand","and","cat"};
    std::string test1 = "catsandog";
    std::cout<<"Test case 1: " << workBreak(test1, wordDict) << std::endl;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}