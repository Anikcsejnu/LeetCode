class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy = INT_MAX, curr_sell = 0, profit = 0;
        
        for(int i = 0;i < prices.size();i++) {
            min_buy = min(min_buy, prices[i]);
            curr_sell = prices[i];
            profit = max(profit, curr_sell - min_buy);
        }
        return profit;
    }
};