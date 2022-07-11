// O(nlog(n)) approach

class Solution {
public:
    vector<int> countBits(int n) {
        int count = 0, num;
        vector<int> res;
        
        for(int i = 0;i <= n;i++) {
            count = 0, num = i;
            
            while(num != 0) {
                count += num % 2;
                num = num / 2;
            }
            res.push_back(count);
        }
        
        return res;
    }
};

//O(n) approach

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1);
        res[0] = 0;
         
        for(int i = 0;i <= n;i++) {
            res[i] = res[i / 2] + i % 2;
        }
        return res;
    }
};