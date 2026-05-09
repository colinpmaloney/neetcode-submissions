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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> result;

        int width = 1;
        int nextWidth = 0;
        queue<TreeNode*> q;
        q.emplace(root);
        while(!q.empty()){
            TreeNode* parent = q.front();
            q.pop();

            if (parent->left){
                q.emplace(parent->left);
                nextWidth++;
            }
            if (parent->right){
                q.emplace(parent->right);
                nextWidth++;
            }

            width--;
            if(width == 0){
                result.emplace_back(parent->val);
                width = nextWidth;
                nextWidth = 0;
            }
        }

        return result;
    }
};

// Use depth first search,
// Only append the last node of each depth to the tree