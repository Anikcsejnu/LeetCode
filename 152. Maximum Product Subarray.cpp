class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minn = nums[0], maxx = nums[0];
        int ans = nums[0];
        for(int i = 1;i < nums.size();i++) {
            int curMax = maxx;
            
            maxx = max(nums[i], max(nums[i] * maxx, nums[i] * minn));
            minn = min(nums[i], min(nums[i] * curMax, nums[i] * minn));
            
            ans = max(ans, maxx);
        }
        
        return ans;
    }
};