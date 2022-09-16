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


// Peak Valley approach

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size(), profit = 0;
        int peak = INT_MAX;
        int valley = peak;
        
        for(int i = 0;i < len;i++) {
            if(prices[i] < peak) {
                profit += peak - valley;
                
                peak = prices[i];
                valley = peak;
            }
            else {
                peak = prices[i];
            }
        }
        
        profit += peak - valley;
        
        return profit;
    }
};