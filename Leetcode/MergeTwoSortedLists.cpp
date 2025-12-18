#include "MergeTwoSortedLists.h"

#include <cstdlib>

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *dummy = new ListNode(0);
    ListNode *p = dummy;
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            p->next = list1;
            list1 = list1->next;
        }else {
            p->next = list2;
            list2 = list2->next;
        }
        p = p->next;
    }
    if (list1 != NULL) p->next = list1;
    else p->next = list2;

    return dummy->next;
}
