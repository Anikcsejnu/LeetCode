class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        
        vector<int> fs1(26, 0);
        for(auto c: s1) fs1[c - 'a']++;
        
        vector<int> fs2(26, 0);
        int l = 0, r = 0;
        
        while(r < s2.size()) {
            fs2[s2[r] - 'a']++;
            
            if(r - l + 1 == s1.size()) {
                if(fs1 == fs2) return true;
            }
            
            if(r - l + 1 < s1.size()) {
                r++;
            }
            else {
                fs2[s2[l] - 'a']--;
                l++;
                r++;
            }
        }
        
        return false;
    }
    
};

// Solved again

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> fqs1(26, 0);
        for(auto c: s1) fqs1[c - 'a']++;
        
        vector<int> fqs2(26, 0);
        
        int l = 0, r = 0;
        
        while(r < s2.size()) {
            fqs2[s2[r] - 'a']++;
            
            if(r - l + 1  == s1.size()) {
                if(fqs1 == fqs2) {
                    return true;
                }
            }
            
            if(r - l + 1 < s1.size()) {
                r++;
            }
            else {
                fqs2[s2[l] - 'a']--;
                l++;
                r++;
                
            }
        }
        
        return false;
    }
    
};