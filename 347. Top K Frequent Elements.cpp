class Solution {
public:    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;
        priority_queue <pair<int, int>> pq;
        
        for(int i = 0;i < nums.size();i++) {
            mp[nums[i]]++;
        }        
        for(auto i: mp) {
            pq.push({i.second, i.first});
        }
        
        while(k--) {
            auto temp = pq.top();
            ans.push_back(temp.second);
            pq.pop();
        }
        
        return ans;
        
    }
};


// Solve again

class Solution {
public:    
    static bool cmp(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> vp;
        map<int, int> mp;
        vector<int> ans;
        int len = nums.size();
        
        for(int i = 0;i < len;i++) {
            mp[nums[i]]++;
        }
        
        for(auto v: mp) {
            vp.push_back(make_pair(v.first, v.second));
        }
        
        sort(vp.begin(), vp.end(), cmp);
        
        for(int i = 0;i < k;i++) {
            ans.push_back(vp[i].first);
        }
        
        return ans;
    }
}; 