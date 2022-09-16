class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int prev = 0, profit = 0;
        
        for(int curr = 1;curr < len;curr++) {
            if(prices[prev] < prices[curr]) {
                profit += prices[curr] - prices[prev];
            }
            prev++;
        }
        
        return profit;
    }
};