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

    bool isLeaf(TreeNode* root){
        return !(root->left || root->right);
    }

    bool backTrack(TreeNode* root, int cur, int target){
        cout << root->val << ' ' << cur << '\n';
        if(cur == target && isLeaf(root)) return true;

        if(root->right && root->left)
            return backTrack(root->left, cur + root->left->val, target) || backTrack(root->right, cur + root->right->val, target);
        if(root->right)
            return backTrack(root->right, cur + root->right->val, target);
        if(root->left)
            return backTrack(root->left, cur + root->left->val, target);

        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root)
            return backTrack(root, root->val, targetSum);
        return false;
    }
};
