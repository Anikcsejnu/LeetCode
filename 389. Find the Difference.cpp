class Solution {
public:
    char findTheDifference(string s, string t) {
        int len1 = t.size();
        int len2 = s.size();
        char ans;
        int hash[26] = {0};
        
        if (len2 == 0) return t[0];
        
        for(int i = 0;i < len2;i++) {
            hash[s[i] - 'a']++;
        }
        
        for(int i = 0;i < len1;i++) {
            if(hash[t[i] - 'a'] - 1 < 0) {
                ans = t[i];
                break;
            }
            hash[t[i] - 'a']--;
        } 
        return ans;
    }
};