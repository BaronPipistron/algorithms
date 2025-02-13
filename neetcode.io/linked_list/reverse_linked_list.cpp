// Time: O(n)
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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* prev = head;
        ListNode* tmp = head->next;
        ListNode* next = head->next->next;

        prev->next = nullptr;

        while (next != nullptr) {
            tmp->next = prev;

            ListNode* new_next = next->next;
            ListNode* new_prev = tmp;

            prev = new_prev;
            tmp = next;
            next = new_next;
        }

        tmp->next = prev;

        return tmp;
    }
};