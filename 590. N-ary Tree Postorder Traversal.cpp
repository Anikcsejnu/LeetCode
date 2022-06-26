class Solution {
public:
    vector<int> result;
    void travel(Node* root){
        if (root == nullptr) {
            return;
        }
        
        for(Node* child: root -> children) {
            travel(child);
        }
        
        result.push_back(root -> val);
        
    }
    
    vector<int> postorder(Node* root) {
        travel(root);
        
        return result;
    }
};