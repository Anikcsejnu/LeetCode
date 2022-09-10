class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = INT_MAX;
        int left = 1, right = ans - 1;
        
        while(left <= right) {
            int mid = (left + right) / 2;
            long long cnt = 0;
            
            for(auto pile: piles){
                if(pile % mid == 0) {
                    cnt += (pile / mid);
                }
                else {
                    cnt += (pile / mid) + 1;
                }
            }
            
            if(cnt > h) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
                ans = min(ans, mid);
            }
        }
        
        return ans;
    }
};