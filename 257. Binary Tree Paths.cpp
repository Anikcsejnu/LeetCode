class Solution {
public:
    vector<string> ans;
    
    void dfs(TreeNode *root, string path) {
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(path);
        }
        
        if (root->left != NULL) {
            dfs(root->left, path + "->" + to_string(root->left->val));
        }
        
        if (root->right != NULL) {
            dfs(root->right, path + "->" + to_string(root->right->val));
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        if(root == NULL) return ans;
        
        dfs(root, to_string(root->val));
        
        return ans;
    }
};