class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransomNoteCnt[26] = {0};
        int magazineCnt[26] = {0};
        int len = ransomNote .size();
        
        for(int i = 0;i < len;i++) {
            ransomNoteCnt[ransomNote[i] - 'a']++;
        }
        
        len = magazine.size();
        for(int i = 0;i < len;i++) {
            magazineCnt[magazine[i] - 'a']++;    
        }
        
        for(int i = 0; i < 26;i++) {
            if(ransomNoteCnt[i] > magazineCnt[i]) {
                return false;
            } 
        }
        
        return true;
    }
};