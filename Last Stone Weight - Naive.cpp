class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int i, x, y;
        
        sort(stones.begin(), stones.end());
        while(stones.size() > 1) {
            i = stones.size() - 1;
            y = stones[i];
            x = stones[i - 1];
            
            stones.pop_back();
            stones.pop_back();
            
            if(x != y) {
                stones.push_back(y - x);
            }
            
            sort(stones.begin(), stones.end());
        }
        if (stones.size() == 0) return 0;
        
        return stones[0];
    }
};