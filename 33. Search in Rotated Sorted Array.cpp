// Naive approach

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        map<int, int>mp;
        
        
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]] = i;
        }
        
        sort(nums.begin(), nums.end());
        
        while(left <= right) {
            int mid = (left + right) / 2;
            
            if(nums[mid] < target) {
                left = mid + 1;
            }
            else if(nums[mid] > target) {
                right = mid - 1;
            }
            else {
                return mp[nums[mid]];
            }
        }
        
        return -1;
    }
};