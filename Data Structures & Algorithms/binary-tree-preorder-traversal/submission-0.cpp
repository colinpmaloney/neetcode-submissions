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
        all.emplace_back(root->val);
        DFS(all, root->left);
        DFS(all, root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        DFS(result, root);
        return result;
    }
};