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