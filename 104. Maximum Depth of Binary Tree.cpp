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
    int count = 0;
    int maxHeight(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        
        count = max(maxHeight(root->left), maxHeight(root->right)) + 1;
        return count;
        
    }
    
    int maxDepth(TreeNode* root) {
        int depth = maxHeight(root);
        return depth;
    }
};