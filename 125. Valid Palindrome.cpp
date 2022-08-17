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

// Solved using two pointer

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
        
        int left = 0, right = alphaNumeric.size() - 1;
        while(left < right) {
            if(alphaNumeric[left] == alphaNumeric[right]) {
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true; 
    }
};