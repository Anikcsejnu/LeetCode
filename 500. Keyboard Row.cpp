class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> dict(26);
        vector<string> rows = {"QWERTYUIOP", "ASDFGHJKL", "ZXCVBNM"};
        
        for(int i = 0;i < rows.size();i++) {
            for(auto ch: rows[i]) {
                dict[ch - 'A'] = 1 << i;
            }
        }
        
        vector<string> res;
        for(auto word: words) {
            int r = 7;
            
            for(auto ch: word) {
                r &= dict[toupper(ch) - 'A'];
                
                if(r == 0) break;
            }
            
            if(r) res.push_back(word);
        }
        
        return res;
    }
};