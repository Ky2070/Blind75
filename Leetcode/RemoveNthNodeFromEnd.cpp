//
// Created by Administrator on 16/12/2025.
//
#include "RemoveNthNodeFromEnd.h"

#include <cstddef>

ListNode* removeNthFromEnd(ListNode *head, int n) {
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *fast = dummy;
    ListNode *slow = dummy;

    for (int i = 1; i <= n + 1; i++) {
        fast = fast->next;
    }
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}
