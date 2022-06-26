class Solution {
public:
    vector<int> result;
    void travel(Node* root){
        if (root == nullptr) {
            return;
        }
        
        result.push_back(root -> val);
        
        for(Node* child: root -> children) {
            travel(child);
        }
        
    }
    vector<int> preorder(Node* root) {
        travel(root);
        
        return result;
    }
};