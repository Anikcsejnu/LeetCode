class Solution {
public:    
    static bool cmp(pair<int, int>& a, pair<int, int> &b) {
        return a.second > b.second;
    } 
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;
        vector<pair<int, int>> vp;
        
        for(int i = 0;i < nums.size();i++) {
            mp[nums[i]]++;
        }        
        
        for(auto i: mp) {
            vp.push_back({i.first, i.second});
        }
        
        
        sort(vp.begin(), vp.end(), cmp);
        
        for(int i = 0;i < k;i++) {
            ans.push_back(vp[i].first);
        }
    
        return ans;
        
    }
};