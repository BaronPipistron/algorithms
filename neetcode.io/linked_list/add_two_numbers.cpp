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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tmp1 = l1;
        ListNode* tmp2 = l2;

        int ost = 0;

        ListNode* l1_end = nullptr;
        ListNode* l2_end = nullptr;

        while (tmp1 != nullptr && tmp2 != nullptr) {
            if (tmp1->next == nullptr) {
                l1_end = tmp1;
            }

            int sum = tmp1->val + tmp2->val + ost;
            ost = sum / 10;
            tmp1->val = sum % 10;

            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }

        while (tmp1 != nullptr) {
            if (tmp1->next == nullptr) {
                l1_end = tmp1;
            }

            int sum = tmp1->val + ost;
            ost = sum / 10;
            tmp1->val = sum % 10;

            tmp1 = tmp1->next;
        }

        if (tmp2 != nullptr) {
            l1_end->next = tmp2;
        }

        while (tmp2 != nullptr) {
            if (tmp2->next == nullptr) {
                l2_end = tmp2;
            }

            int sum = tmp2->val + ost;
            ost = sum / 10;
            tmp2->val = sum % 10;

            tmp2 = tmp2->next;
        }

        if (ost != 0) {
            if (l1_end->next != nullptr) {
                l2_end->next = new ListNode(ost);
            } else {
                l1_end->next = new ListNode(ost);
            }
        }

        return l1;
    }
};