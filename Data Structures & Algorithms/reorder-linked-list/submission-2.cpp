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
    void reorderList(ListNode* head) {
        ListNode* slowList = head; // Slow
        ListNode* fastList = head; // Fast

        while(fastList->next && fastList->next->next){
            slowList = slowList->next;
            fastList = fastList->next->next;
        }

        ListNode* prevFast = nullptr;
        ListNode* curFast = slowList->next;
        while(curFast){
            auto temp = curFast->next;
            curFast->next = prevFast;
            prevFast = curFast;
            curFast = temp;
        }
        slowList->next = nullptr;

        // // Merge two list
        ListNode* cur = head;
        while(prevFast){
            auto temp = cur->next;

            cur->next = prevFast;
            prevFast = prevFast->next;
            cur = cur->next;

            cur->next = temp;
            cur = cur->next;
        }

    }
};
