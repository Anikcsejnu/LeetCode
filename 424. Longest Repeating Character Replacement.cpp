class Solution {
public:
    int mp[26];
    
    int getMaxFrequency() {
        int maxFq = 0;
        for(int i = 0;i < 26;i++) {
            maxFq = max(maxFq, mp[i]);
        }
        
        return maxFq;
    }
    
    int characterReplacement(string s, int k) {
        memset(mp, 0, 26);
        int res = 0, left = 0;
        
        for(int right = 0;right < s.size();right++) {
            mp[s[right] - 'A']++;
            
            while(((right - left) + 1) - getMaxFrequency() > k) {
                mp[s[left] - 'A']--;
                left++;
            }
            
            res = max(res, (right - left) + 1);
        }
        
        return res;
    }
};