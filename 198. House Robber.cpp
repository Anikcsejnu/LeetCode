class Solution {
public:
    int recur(vector<int>& nums, int idx, vector<int> &dp) {
        if(idx >= nums.size()) return 0;
        if (dp[idx] != -1) return dp[idx];
        return dp[idx] = max(nums[idx] + recur(nums, idx + 2, dp), recur(nums, idx + 1, dp));
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() + 1, -1);
        return recur(nums, 0, dp);    
    }
};