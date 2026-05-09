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
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;    
        set<ListNode*> visited;

        while(visited.count(slow) == 0){
            visited.emplace(slow);
            if(slow->next == nullptr)
                return false;
            slow = slow->next;
        }    

        return true;
    }
};
