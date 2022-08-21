class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0, hi = nums.size()-1;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            cout << mid << ' ' << lo << ' ' << hi << endl;
            cout << nums[mid] << ' ' << nums[lo] << ' ' << nums[hi] << endl;
            
            if (nums[mid] < nums[hi]) {
                hi = mid;
            } else {
                lo = mid+1;
            }
        }
        return nums[lo];
    }
};