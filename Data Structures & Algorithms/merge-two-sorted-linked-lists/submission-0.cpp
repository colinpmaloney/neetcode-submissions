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
        ListNode* newList = new ListNode();
        ListNode* result = newList;


        while(list1 != nullptr || list2 != nullptr){
            if(list1 == nullptr){
                newList->next = list2;
                cout << "Added rest of list 2" << '\n';
                return result->next;
            }if(list2 == nullptr){
                newList->next = list1;
                cout << "Added rest of list 1" << '\n';
                return result->next;
            }
            if(list1->val < list2->val){
                newList->next = list1;
                cout << "Added from list 1 -> " << list1->val << '\n';
                list1 = list1->next;
                newList = newList->next;
            }else{
                newList->next = list2;
                cout << "Added from list 2 -> " << list2->val << '\n';
                list2 = list2->next;
                newList = newList->next;
            }
        }

        return result->next;
    }
};
