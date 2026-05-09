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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        stack<TreeNode*> stk;
        stk.emplace(root);

        while(!stk.empty()){
            auto parent = stk.top();
            stk.pop();


            swap(parent->left, parent->right);
            if(parent->left)
                stk.emplace(parent->left);
            if(parent->right)
                stk.emplace(parent->right);
        }

        return root;
    }
};
