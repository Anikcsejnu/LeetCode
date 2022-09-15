class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int l = 0, r = nums.size() - 1;
        
        while(l < r) {
            int sum = nums[l] + nums[r];
            if (sum < target) 
                l++;
            else if(sum > target)
                r--;
            else 
                break;
        }
        
        return {l + 1, r + 1};

        
    }
};