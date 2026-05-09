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

    void recursive(TreeNode* root, vector<int>& temp){
        if(root){
            recursive(root->left, temp);
            temp.emplace_back(root->val);
            recursive(root->right, temp);
        }
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> result;
        recursive(root, result);
        return result[k-1];
    }
};
