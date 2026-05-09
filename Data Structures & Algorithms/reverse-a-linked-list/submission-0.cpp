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
        
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr != nullptr){
            // Store the one in front
            ListNode* temp = curr->next;
            // Point to the one behind
            curr->next = prev;
            // Set previous equal to your current position
            prev = curr;
            // Set current equal to the next position
            curr = temp;
        }

        return prev;

    }
};
