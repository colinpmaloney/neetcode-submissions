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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return root;
       queue<TreeNode*> q;
       q.emplace(root);
        
         // if(parent->left != nullptr)
            //     q.emplace(parent->left);
            // if(parent->right != nullptr)
            //     q.emplace(parent->right);

        int count = 0;
        while(!q.empty()){
            TreeNode* parent = q.front();
            if(parent->right != nullptr && parent->left != nullptr){
                TreeNode* temp = parent->left;
                parent->left = parent->right;
                parent->right = temp;
                q.emplace(parent->left);
                q.emplace(parent->right);
            }else if(parent->right != nullptr){
                parent->left = parent->right;
                parent->right = nullptr;
                q.emplace(parent->left);
            }else if(parent->left != nullptr){
                parent->right = parent->left;
                parent->left = nullptr;
                q.emplace(parent->right);
            }
            q.pop();
        } 

        return root;
    }
};
