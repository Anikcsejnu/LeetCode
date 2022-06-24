class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n;
        
        n = nums.size();
        vector<int> ans(n, -1);
        
        for(int i = 0;i < n * 2;i++) {
            int idx = i % n;
            while(st.size() && nums[st.top()] < nums[idx]) {
                ans[st.top()] = nums[idx];
                st.pop();
            }
            if (ans[idx] == -1) st.push(idx);
        }
        
        return ans;
    }
};