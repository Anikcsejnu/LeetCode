class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        
        int left = 0, res = 0;
        
        for(int right = 0;right < s.size();right++) {
            while(st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }
            
            st.insert(s[right]);
            res = max(res, right - left + 1);
        }
        
        return res;
    }
};