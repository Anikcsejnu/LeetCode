class Solution {
public:
    bool detectCapitalUse(string word) {
        int cpitalLetterCount = 0, len = word.size();
        bool isfirstLetterCapital = false;
        
        for(int i = 0;i < len;i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                cpitalLetterCount++;
                if (i == 0) isfirstLetterCapital = true;
            }
        }
        
        if((cpitalLetterCount == len) || 
           (isfirstLetterCapital && cpitalLetterCount == 1) || 
           (cpitalLetterCount == 0)) {
            return true;
        }
        else {
            return false;
        }
    }
};