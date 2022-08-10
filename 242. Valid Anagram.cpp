class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int, int> smp, tmp;
        int sl = s.size(), tl = t.size();
        
        if (sl != tl) return false;
        
        for(int i = 0;i < sl;i++) {
            smp[s[i] - 'a']++;
            tmp[t[i] - 'a']++;
        }
        
        for(int i = 0;i < 26;i++) {
            if(smp[i] != tmp[i]) return false;
        }
        
        return true; 
    }
};

// optimized solution

class Solution {
public:
    bool isAnagram(string s, string t) {
        int mp[26] = {0};
        
        for(auto c: s) {
            mp[c - 'a']++;
        }
        for(auto c: t) {
            mp[c - 'a']--;
        }
        
        for(int i = 0;i < 26;i++) {
            if(mp[i] != 0) return false;
        }
        
        return true;
    }
};