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
        ListNode* deepest = nullptr;
        ListNode* curr = head;

        while(curr && curr->next){
            auto temp = curr->next;

            deepest = curr;
            while(deepest->next && deepest->next->next){
                deepest = deepest->next;
            }
            auto tempTwo = deepest->next;
            if(!tempTwo) break;
            deepest->next = nullptr;
            deepest = tempTwo;
            
            curr->next = deepest;
            if(temp != deepest)
                deepest->next = temp;
                
            curr = temp;   
        }
    }
};
