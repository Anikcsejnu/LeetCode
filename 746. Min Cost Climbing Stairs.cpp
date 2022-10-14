//Tabulation

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1);
        
        for(int i = 2;i <= n;i++) {
            int jumpOne = dp[i - 1] + cost[i - 1];
            int jumpTwo = dp[i - 2] + cost[i - 2];
            dp[i] = min(jumpOne, jumpTwo);
        }
        return dp[n];

    }
};

// Space Optimazation
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        for(int i = 2;i < n;i++) {
            cost[i] += min(cost[i-1], cost[i-2]);
        }
        
        return min(cost[n-1], cost[n-2]);
    }
};

// Recusion

class Solution {
int dp[1000] = {0};
public:
    int recur(vector<int>& cost, int n) {
        if (n == 0 || n == 1) 
            return cost[n];
        if (dp[n] != 0) 
            return dp[n];
        
        dp[n] = cost[n] + min(recur(cost, n - 1), recur(cost, n - 2));
        
        return dp[n];
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return min(recur(cost, n - 1), recur(cost, n - 2));
    }
};

// Solve again


class Solution {
int dp[1000] = {0};
public:
    int recur(vector<int>& cost, int n) {
        if (n == cost.size() - 1 || n == cost.size() - 2) {
            return cost[n];
        }
        
        if(dp[n] != 0) return dp[n];
        
        dp[n] = min(recur(cost, n + 1), recur(cost, n + 2)) + cost[n]; 
        
        return dp[n];
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = -1;
        
        return min(recur(cost, n + 1), recur(cost, n + 2));
    }
};