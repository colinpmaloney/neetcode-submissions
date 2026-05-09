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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        
        unordered_map<TreeNode*, int> visited;
        stack<TreeNode*> stk;
        stk.push(root);

        int result = 0;

        while(!stk.empty()){
            // If we haven't visited it and it exist go left
            if(root->left != nullptr && ++visited[root->left] == 1){
                stk.push(root->left);
                root = root->left;
            }else if(root->right != nullptr && ++visited[root->right] == 1){
                stk.push(root->right);
                root = root->right;
            }else{
                result = max(result, (int)stk.size());
                stk.pop();
                if(!stk.empty())
                    root = stk.top();
            }
        }

        return result;
    }
};
