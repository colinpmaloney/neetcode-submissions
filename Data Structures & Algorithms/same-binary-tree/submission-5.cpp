/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

       queue<pair<TreeNode*, TreeNode*>> pq; 
       pq.emplace(pair{p, q});

       while(!pq.empty()){
            auto [one, two] = pq.front();
            pq.pop();

            if(!one && !two) continue;
            if(!one || !two) return false;
            if(one->val != two->val) return false;

            pq.emplace(pair{one->left, two->left});
            pq.emplace(pair{one->right, two->right});
        }

       return true;
    }
};
