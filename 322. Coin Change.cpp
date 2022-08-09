// Recursion Top To Bottum

class Solution {
public:
    int dp[10000 + 1][12 + 1];
    
    int func(vector<int>& coins, int amount, int i, int n) {
        if(i == n || amount == 0) return amount == 0? 0: INT_MAX - 1;
        
        if(dp[amount][i] != -1) return dp[amount][i];
        
        if(coins[i] > amount) return dp[amount][i] = func(coins, amount, i + 1, n);
        else
            return dp[amount][i] = min(1 + func(coins, amount - coins[i], i, n),
                                      func(coins, amount, i + 1, n));
    }
    
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int n = coins.size();
        int ans = func(coins, amount, 0, n);
        
        return ans == INT_MAX - 1? -1: ans;
    }
};
