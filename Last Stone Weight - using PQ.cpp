class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int sz = stones.size(), x, y;
        priority_queue <int> pq;
        
        for(int i = 0;i < sz;i++) {
            pq.push(stones[i]);
        }
        
        while(pq.size() > 1) {
            y = pq.top();
            pq.pop();
            x = pq.top();
            pq.pop();
            
            if(x != y) {
                pq.push(y - x);
            }
        }
        
        return pq.empty()? 0: pq.top();
    }
};