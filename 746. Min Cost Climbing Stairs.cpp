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