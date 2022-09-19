class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), currSum = 0, globalSum = INT_MIN;
        
        for(int i = 0;i < n;i++) {
            currSum = max(currSum + nums[i], nums[i]);
            globalSum = max(currSum, globalSum);
        }
        
        return globalSum;
    }
};