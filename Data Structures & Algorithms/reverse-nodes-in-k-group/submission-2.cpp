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

    // To reverse one entire list
    // While the currentNode isn't null
    // Store the current->next in temp
    // Set current->next to the previous
    // Set previous = current;
    // Set current = temp;

    /*
    * Reverses the listNode.
    * Returns pointer to the new head
    */
    ListNode* reverseList(ListNode* node){
        ListNode* curr = node;
        ListNode* prev = nullptr;
        ListNode* last = nullptr;

        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            if(curr && !curr->next)
                last = curr;
        }
        return last;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1) return head;
        vector<ListNode*> lists;
        ListNode* curr = head;

        int count = 0;
        while(curr){
            count++;
            lists.emplace_back(curr);
            for(int x = 0; x < k - 1 && curr->next; x++){
                curr = curr->next;
                count++;
            }
            ListNode* temp = curr->next;
            curr->next = nullptr;
            curr = temp;
        }

        ListNode returnHead(-1);
        ListNode* movingReturn = &returnHead;
        for(int x = 0; x < lists.size(); x++){
            ListNode* listX = lists[x];
            if(x == lists.size() - 1 && count % k != 0){
                movingReturn->next = listX;
                break;
            }
            ListNode* reversedHead = reverseList(listX);
            movingReturn->next = reversedHead;
            movingReturn = listX;
        }

        return returnHead.next;
    }
};



// To only do every k
// Add a counter while loop while less than k