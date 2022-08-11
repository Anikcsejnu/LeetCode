// Time: O(N)
// Space: O(N)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;  
        int ans = 0;
        
        for(int i = 0;i < nums.size();i++) {
            mp[nums[i]]++;
        }
        
        for(auto item: mp) {
            if(item.second == 1) {
                ans = item.first;
                break;
            }
        }
        
        return ans;
    }
};

// Time: O(N) Linear
// Space: O(1) Constant

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        
        for(int i = 0;i < nums.size();i++) {
            ans ^= nums[i];
        }
        
        return ans;
    }
};