// Solved using unordered_map, hash table

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        
        for(auto &s: strs) {
            string t = s;
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }
        
        for(auto &it: mp) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};

// Use counting sort to solve 
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        
        for(auto &s: strs) {
            string t = s;
            t = countingSort(t);
            mp[t].push_back(s);
        }
        
        for(auto &it: mp) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
    
    string countingSort(string str) {
        int mp[26] ={0};
        string t = "";
        
        for(auto &s: str) {
            mp[s - 'a']++;
        }
        
        for(int i = 0;i < 26;i++) {
            t += string(mp[i], i + 'a');    
        }
        return t;
    }
};