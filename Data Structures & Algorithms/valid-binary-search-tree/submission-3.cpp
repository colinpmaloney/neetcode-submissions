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

    bool DFS(TreeNode* root, int left, int right){
        if(!root) return true;
        if(left <= root->val || right >= root->val)
        {
            return false;
        }
        return DFS(root->left, root->val, right) && DFS(root->right, left, root->val);
    }

    bool isValidBST(TreeNode* root) {
        return DFS(root, INT_MAX, INT_MIN);
    }
};

//
