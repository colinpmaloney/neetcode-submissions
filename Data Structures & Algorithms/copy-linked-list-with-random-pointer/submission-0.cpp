/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* movingHead = head;
        unordered_map<Node*, Node*> oldToCopy;
        oldToCopy[nullptr] = nullptr;

        while(movingHead){
            Node* cp = new Node(movingHead->val);
            oldToCopy[movingHead] = cp;
            movingHead = movingHead->next;
        }

        movingHead = head;
        while(movingHead){
            oldToCopy[movingHead]->next = oldToCopy[movingHead->next];
            oldToCopy[movingHead]->random = oldToCopy[movingHead->random];
            movingHead = movingHead->next;
        }

        return oldToCopy[head];
    }
};
