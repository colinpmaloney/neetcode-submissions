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
    int dfs(TreeNode* root){
        if(root == nullptr) return 0;
        return 1 + max(dfs(root->right), dfs(root->left));
    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        
        queue<TreeNode*> q;
        q.push(root);
        int l, r;
        while(!q.empty()){
            TreeNode* parent = q.front();
            q.pop();

            int l = dfs(parent->left);
            int r = dfs(parent->right);

            if(l != 0)
                q.emplace(parent->left);
            if(r != 0)
                q.emplace(parent->right);
        
            if(abs(r-l) > 1)
                return false;
        }

        return true;
    }
};
