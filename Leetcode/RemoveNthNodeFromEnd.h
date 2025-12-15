//
// Created by Administrator on 16/12/2025.
//

#ifndef LEETCODE_REMOVENTHNODEFROMEND_H
#define LEETCODE_REMOVENTHNODEFROMEND_H
// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n);

#endif //LEETCODE_REMOVENTHNODEFROMEND_H