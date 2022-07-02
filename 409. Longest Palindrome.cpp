class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> mp(52, 0);
        int longestPalindrome = 0;
        bool isOdd = false;
        int len = s.size();
        
        for(int i = 0;i < len;i++) {
            if(s[i] <= 'Z')
                mp[s[i] -'A' ]++;
            
            else 
                mp[s[i] -'a' + 26]++;
        }
        
        for(int i = 0;i < 52;i++) {
            longestPalindrome += mp[i] / 2;
            
            if(mp[i] % 2) isOdd = true;
        }
        
        return isOdd? ((2 * longestPalindrome) + 1): (2 * longestPalindrome);  
    }
};