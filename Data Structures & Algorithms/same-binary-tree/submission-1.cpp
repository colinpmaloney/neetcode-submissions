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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr){
            if(q == nullptr) return true;
            return false;
        }

        if(q == nullptr){
            if(p == nullptr) return true;
            return false;
        }
       queue<TreeNode*> one; 
       queue<TreeNode*> two; 
       one.emplace(p);
       two.emplace(q);
       while(!one.empty() && !two.empty()){
        auto currentOne = one.front();
        auto currentTwo = two.front();

        if(currentOne->val != currentTwo->val) 
            return false;

        
        one.pop();
        two.pop();

        if(currentOne->left != nullptr){
            if(currentTwo->left == nullptr) return false;
            one.emplace(currentOne->left);
            two.emplace(currentTwo->left);
        }else
            if(currentTwo->left != nullptr) return false;
        if(currentOne->right != nullptr){
            if(currentTwo->right == nullptr) return false;
            one.emplace(currentOne->right);
            two.emplace(currentTwo->right);
        }else
            if(currentTwo->right != nullptr) return false;
       }

       return true;
    }
};
