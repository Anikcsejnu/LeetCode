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

// Solved at 28 Oct 2022

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, minBuy = INT_MAX, currSell = 0;
        
        for(int i = 0;i < prices.size();i++) {
            minBuy = min(minBuy, prices[i]);
            currSell = prices[i];
            maxProfit = max(maxProfit, currSell - minBuy);
        }
        
        return maxProfit;
    }
};
