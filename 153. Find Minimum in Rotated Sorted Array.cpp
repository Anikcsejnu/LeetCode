class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1, mid = 0;
        
        while(start < end) {
            mid = (start + end) / 2;
                       
            if(nums[mid] < nums[end]) {
                end = mid;
            }
            else {
                start = mid + 1;
            }
        }
        
        return nums[start];
    }
};

// Solve using go

func findMin(nums []int) int {
    start, end, mid := 0, len(nums) - 1, 0
    
    for start < end {
        mid = (start + end) / 2
        
        if(nums[mid] < nums[end]) {
            end = mid
        } else {
            start = mid + 1
        }
    }
    return nums[start]
}