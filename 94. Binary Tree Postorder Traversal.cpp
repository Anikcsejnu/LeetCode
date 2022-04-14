class Solution {
public:
    void postOrderTraverse(TreeNode* root, vector<int>& ans) {
        if (root != NULL) {
            postOrderTraverse(root->left, ans);
            postOrderTraverse(root->right, ans);
            ans.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans = {};
        if (root != NULL) { 
            postOrderTraverse(root, ans);
        }
        return ans;    
    }
};