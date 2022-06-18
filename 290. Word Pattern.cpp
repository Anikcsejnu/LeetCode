class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> pw;
        map<string, char> wp;
        vector<string>word;
        int len = pattern.size();
        string temp = "";
        
        for(auto ch: s) {
            if(ch == ' ') {
                word.push_back(temp);
                temp = "";
                continue;
            }
            temp += ch;
        }
        word.push_back(temp);
        
        if(word.size() != len) return false;
        
        for(int i = 0;i < len;i++) {
            if((pw.count(pattern[i]) && pw[pattern[i]] != word[i]) 
                || (wp.count(word[i]) && wp[word[i]] != pattern[i])) {
                
                return false;
            }
            pw[pattern[i]] = word[i];
            wp[word[i]] = pattern[i]; 
        }
        
        return true;
    }
};