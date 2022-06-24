class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& numbersToFind, vector<int>& nums) {
        stack <int> st;
        unordered_map<int, int> mp;
        int len;
        
        len = numbersToFind.size();
        
        for(int num: nums) {
            while(st.size() && st.top() < num) {
                mp[st.top()] = num;
                st.pop();
            } 
            st.push(num);
        }
        
        vector<int> ans(len, - 1);
        
        for(int i = 0;i < len;i++) {
            auto itr = mp.find(numbersToFind[i]);
            
            if(itr != mp.end()) {
                ans[i] = itr->second;
            }
        }
        
        return ans;
    }
};