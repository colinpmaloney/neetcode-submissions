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
        ListNode dummy(-1);
        ListNode* head = &dummy;
        ListNode* current = head;

       while(list1 && list2){
        int list1Val = list1->val;
        int list2Val = list2->val;
        if(list1Val < list2Val){
            current->next = list1;
            list1 = list1->next;
            current = current->next;
        }else{
            current->next = list2;
            list2 = list2->next;
            current = current->next;
        }
       }

       if(!list1 && list2){
            current->next = list2;
       }
       if(!list2 && list1){
            current->next = list1;
       }

       return head->next;
    }
};
