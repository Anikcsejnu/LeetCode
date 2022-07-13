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
    vector<vector<int>> solve(TreeNode* root, vector<vector<int>> &res, int lvl) {
        if(root == NULL) return res;
        
        if(res.size() <= lvl) {
            vector<int>temp{root->val};
            res.push_back(temp);
        }
        else {
            res[lvl].push_back(root->val);
        }
        
        solve(root->left, res, lvl + 1);
        solve(root->right, res, lvl + 1);
        
        return res;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        res = solve(root, res, 0);
        
        return res;    
    }
};