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

// Recursion Bottom to Top

class Solution {
public:
    int dp[10000 + 1][12 + 1];
    
    int func(vector<int>& coins, int amount, int n) {
        if(n == 0 || amount == 0) return amount == 0? 0 : INT_MAX - 1;
        
        if(dp[amount][n] != -1) return dp[amount][n];
        
        if (coins[n - 1] > amount) return dp[amount][n] = func(coins, amount, n - 1);
        else return dp[amount][n] = min(func(coins, amount - coins[n - 1], n)  + 1, func(coins, amount, n - 1) + 0); 
    }
    
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int n = coins.size();
        int ans = func(coins, amount, n);
        
        return ans == INT_MAX - 1? -1: ans;
    }
};
