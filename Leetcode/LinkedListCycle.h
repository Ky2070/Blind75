//
// Created by Administrator on 15/12/2025.
//

#ifndef LEETCODE_LINKEDLISTCYCLE_H
#define LEETCODE_LINKEDLISTCYCLE_H
#include <wchar.h>
/**
Definition for singly-linked list.
 */
 struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
 };
bool hasCycle(ListNode *head);
#endif //LEETCODE_LINKEDLISTCYCLE_H