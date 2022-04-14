class Solution {
public:
    void inOrderTraverse(TreeNode* root, vector<int>& ans) {
        if (root != NULL) {
            inOrderTraverse(root->left, ans);
            ans.push_back(root->val);
            inOrderTraverse(root->right, ans);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans = {};
        if (root != NULL) { 
            inOrderTraverse(root, ans);
        }
        return ans;
    }
};