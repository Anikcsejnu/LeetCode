class Solution {
public:
    bool isPalindrome(string s) {
        string alphaNumeric = "", rev = "";
        int len = s.size();
        
        for(int i = 0;i < len;i++) {
            if(isdigit(s[i]) || isalpha(s[i])) {
                alphaNumeric += tolower(s[i]);  
            }
        }
        
        rev = alphaNumeric;
        reverse(alphaNumeric.begin(), alphaNumeric.end());
        
        return rev == alphaNumeric ? true : false; 
    }
};