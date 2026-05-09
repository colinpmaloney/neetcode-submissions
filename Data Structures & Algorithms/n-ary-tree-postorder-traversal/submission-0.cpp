/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    void DFS(vector<int>& all, Node* root){
        if(!root) return;
        for(int x = 0; x < root->children.size(); x++){
            DFS(all, root->children[x]);
        }
        all.emplace_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> result;
        DFS(result, root);
        return result;
    }
};