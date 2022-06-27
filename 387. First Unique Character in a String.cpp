class Solution {
public:
    int firstUniqChar(string s) {
        int mp[26];
        memset(mp, 0, sizeof(mp));
        
        int len = s.size();
        
        for(int i = 0;i < len;i++) {
            mp[s[i] - 'a']++;
        }
        
        for(int i= 0;i < len;i++) {
            
            if (mp[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};