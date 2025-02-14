// Time: O(n + m)
// Space: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr && list2 == nullptr) return nullptr;
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        ListNode* targetList;
        ListNode* toInsertList;

        if (list1->val < list2->val) {
            targetList = list1;
            toInsertList = list2;
        } else {
            targetList = list2;
            toInsertList = list1;
        }

        ListNode* tmp1 = targetList;
        ListNode* next1 = targetList->next;
        ListNode* tmp2 = toInsertList;

        while (next1 != nullptr) {
            if (tmp2 == nullptr) break;

            ListNode* new_tmp2 = tmp2->next;

            if (tmp1->val <= tmp2->val && tmp2->val < next1->val) {
                tmp1->next = tmp2;
                tmp2->next = next1;

                tmp1 = tmp1->next;
                tmp2 = new_tmp2;
            } else {
                tmp1 = next1;
                next1 = next1->next;
            }
        }

        while (tmp2 != nullptr) {
            ListNode* new_tmp2 = tmp2->next;

            tmp1->next = tmp2;
            tmp2->next = next1;

            tmp1 = tmp1->next;
            tmp2 = new_tmp2;
        }

        return targetList;
    }
};
