class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int len = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i = 0;i < len - 2;i++) {
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int first = i;
            int sum = 0;
            
            int second = i+1;
            int third = len - 1;
            
            while(second < third) {                
                sum = nums[first] + nums[second] + nums[third];
                
                if(sum == 0){
                    ans.push_back({nums[first], nums[second], nums[third]}); 
                    second++;
                    
                    while(second < third && nums[second] == nums[second-1]) {
                        second++;
                    }
                }
                else if(sum > 0) {
                    third--;
                }
                else {
                    second++;
                }
            }
        }
        return ans;
    }
};