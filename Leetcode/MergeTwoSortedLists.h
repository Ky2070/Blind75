//
// Created by Administrator on 18/12/2025.
//

#ifndef LEETCODE_MERGETWOSORTEDLISTS_H
#define LEETCODE_MERGETWOSORTEDLISTS_H
/**
 * Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
#endif //LEETCODE_MERGETWOSORTEDLISTS_H