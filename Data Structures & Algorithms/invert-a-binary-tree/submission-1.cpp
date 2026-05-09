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
        if(root == nullptr) return root;
        queue<TreeNode*> q;
        q.emplace(root);
        int count = 0;

        while(!q.empty()){
            TreeNode* parent = q.front();
            q.pop();

            swap(parent->left, parent->right);
            if(parent->left != nullptr) q.emplace(parent->left);
            if(parent->right != nullptr) q.emplace(parent->right);
        } 

        return root;
    }
};
