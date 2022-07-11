// Naive approach

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