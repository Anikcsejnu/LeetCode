class Solution {
public:
    int ans;
    
    int kthSmallest(TreeNode* root, int k) {
        inOrder(root, k);
        return ans;
    }
    
    void inOrder(TreeNode* root, int& k) {
        if (!root) return;
        
        inOrder(root->left, k);
        
        
        if(--k == 0){
            ans = root->val;
            return;
        }
        
        inOrder(root->right, k);
    } 
};