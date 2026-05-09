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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> sortMe;

        queue<TreeNode*> q;
        q.emplace(root);
        while(!q.empty()){
            TreeNode* parent = q.front();
            q.pop();
            sortMe.emplace_back(parent->val);
            if(parent->left)
                q.emplace(parent->left);
            if(parent->right)
                q.emplace(parent->right);
        }

        sort(sortMe.begin(), sortMe.end());
        return sortMe[k-1];
    }
};
