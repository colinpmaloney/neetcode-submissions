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

    int DFS(TreeNode* root, int greatest){
        if(!root) return 0;
        
        if(root->val >= greatest){
            greatest = root->val;
            return 1 + DFS(root->left, greatest) + DFS(root->right, greatest);
        }
        
        return DFS(root->left, greatest) + DFS(root->right, greatest);
        
    }

    int goodNodes(TreeNode* root) {
        return DFS(root, root->val);
    }
};

// Do a DFS
// Check if the currentValue is the greatestValue on the path
