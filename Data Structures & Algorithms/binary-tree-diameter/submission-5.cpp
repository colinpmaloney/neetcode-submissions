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
    // Return number and biggest diameter of a node
    pair<int, int> DFS(TreeNode* root, int diameter){
        if(root == nullptr) return {0, diameter};

        auto left = DFS(root->left, diameter);
        auto right = DFS(root->right, diameter);

        int height = 1 + max(
                DFS(root->left, diameter), 
                DFS(root->right, diameter)
                ).first;
                
        diameter = max({left.second, right.second, left.first + right.first});

        return pair{height, diameter};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return DFS(root, 0).second;
    }
};
