class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> alpha(26);
        int res = 0;
        
        for(int i = 0;i < s.size();i++) {
            alpha[s[i] - 'a'].push_back(i);
        }
        
        for(auto word: words) {
            int ind = -1;
            bool found = true;
            
            for(auto c: word) {
                auto it = upper_bound(alpha[c - 'a'].begin(), alpha[c - 'a'].end(), ind);
                
                if(it == alpha[c - 'a'].end()) {
                    found = false;
                    break;
                }
                else {
                    ind = *it;
                }
            }
            
            if(found) {
                res++;
            }
        }
        return res;
    }
};