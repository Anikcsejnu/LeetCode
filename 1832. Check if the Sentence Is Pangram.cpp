class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;
        
        for(int i = 0;i < sentence.size();i++) {
            st.insert(sentence[i]);
        }
        
        return st.size() == 26? true: false;
    }
};

// Optimized way
// Bit manupulation

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int occured = 0;
        
        for(int i = 0;i < sentence.size();i++) {
            int curr = 1 << int(sentence[i] -'a');
            occured = occured | curr;
        }
        
        return occured == (1 << 26) - 1? true: false;
    }
};