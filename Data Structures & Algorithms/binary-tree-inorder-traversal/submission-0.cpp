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

    void DFS(vector<int>& all, TreeNode* root){
        if(!root) return;
        DFS(all, root->left);
        all.emplace_back(root->val);
        DFS(all, root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        DFS(result, root);    
        return result;
    }
};