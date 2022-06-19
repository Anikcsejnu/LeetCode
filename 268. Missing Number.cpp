class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = 0, total = 0;
        
        sum = (len * (len + 1)) /2;
        for(int i = 0;i < len;i++) {
            total += nums[i];
        }
        
        return sum - total;
    }
};