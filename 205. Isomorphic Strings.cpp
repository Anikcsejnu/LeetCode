class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char>mps(256, -1), mpt(256, -1);
        int len = s.size();
        
        for(int i = 0;i < len;i++) {
            char x = s[i], y  = t[i];
            
            if((mps[x] != -1 && mps[x] != y) || (mpt[y] != -1 && mpt[y] != x)) {
                return false;
            }
            
            mps[x] = y;
            mpt[y] = x;
        }
        return true;
    }
};