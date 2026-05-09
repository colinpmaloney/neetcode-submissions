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

    void printList(ListNode* node){
        while(node){
            cout << node->val << "->";
            node = node->next;
        }
        cout << "\n\n";
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode dummy(-1);
        ListNode* head = &dummy;

        for(int x = 0; x < lists.size(); x++){
            ListNode* current = head;
            ListNode* listA = head->next;
            ListNode* listB = lists[x];
            while(listA && listB){
                int listAValue = listA->val;
                int listBValue = listB->val;
                if(listAValue < listBValue){
                    current->next = listA;
                    current = current->next;
                    listA = listA->next;
                }else{
                    current->next = listB;
                    current = current->next;
                    listB = listB->next;
                }
            }
            if(!listA && listB)
                current->next = listB;
            else if(!listB && listA)
                current->next = listA;
            printList(listA);
        }

        return head->next;
    }
};


// To merge two sorted list
//      Check while ListA and ListB are both not null
//      If ListA value is less than listB value then set currentNode->next = ListA
//      Else set currentNode->next = ListB
//      Increment the currentNode and the List that you Shifted