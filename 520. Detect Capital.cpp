// C++ Solution

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


// GO Solution

func detectCapitalUse(word string) bool {
    cnt := 0
    isCap := false
    
    for i := 0;i < len(word);i++ {
        if word[i] >= 'A' && word[i] <= 'Z' {
            cnt++;
            if i == 0 {
                isCap = true
            }
        }
    }
    
    if (cnt == len(word)) || (isCap && cnt == 1) || (cnt == 0) {
        return true;
    } else {
        return false;
    }
}