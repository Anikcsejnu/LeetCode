class Solution {
public:
    void preOrderTraverse(TreeNode* root, vector<int>& ans) {
        if (root != NULL) {
            ans.push_back(root->val);
            preOrderTraverse(root->left, ans);
            preOrderTraverse(root->right, ans);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans = {};
        
        if (root != NULL) {
            preOrderTraverse(root, ans);    
        }
        
        return ans;
    }
};