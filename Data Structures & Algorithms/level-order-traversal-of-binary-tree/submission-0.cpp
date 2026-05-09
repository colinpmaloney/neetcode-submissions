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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.emplace(root);

        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            for(int x = 0; x < size; x++){
                cout << x << ' ';
                auto parent = q.front();
                temp.emplace_back(parent->val);
                q.pop();

                if(parent->left != nullptr)
                    q.emplace(parent->left);
                if(parent->right != nullptr)
                    q.emplace(parent->right);
            }
            
            cout << '\n';
            cout << '\n';

            result.emplace_back(temp);
        }

        return result;
    }
};
