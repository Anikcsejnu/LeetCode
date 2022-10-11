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


// Optimal solution 

class Solution {
private:
    int getPivot(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        
        while(start < end) {
            int mid = start + (end - start) / 2;
            
            if(nums[0] <= nums[mid])
                start = mid + 1;
            else
                end = mid;
        }
        
        return start;
    }
    
    int binarySearch(vector<int>& nums, int low, int high, int target) {
        int start = low;
        int end = high;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(target > nums[mid])
                start = mid + 1;
            else if(target < nums[mid])
                end = mid - 1;
            else
                return mid;
        }
        
        return -1;
    }
    
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums);
        
         if(target >= nums[pivot] && target <= nums[n-1]) {
            return binarySearch(nums, pivot, n-1, target);
        }
        else {
            return binarySearch(nums, 0, pivot-1, target);
        }
    }
};

// Updated the approach

class Solution {
private:
    int getPivot(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        
        while(start < end) {
            int mid = start + (end - start) / 2;
            
            if(nums[0] <= nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }
        return start;
    }
    
    int binarySearch(vector<int>& nums, int start, int end, int target) {
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(nums[mid] < target) {
                start = mid + 1;
            }
            else if(nums[mid] > target) {
                end = mid - 1;
            }
            else {
                return mid;
            }
        }
        
        return -1;
    }
    
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int pivot = getPivot(nums);
        
        if((nums[pivot] <= target) && (target <= nums[len-1])) {
            return binarySearch(nums, pivot, len - 1, target);
        }
        else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
        
    }
};