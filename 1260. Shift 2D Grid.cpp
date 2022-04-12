class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int si = 0, sj = 0;
        vector<vector<int>> ans(n,vector<int>(m));
        
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                sj = (j + k) % m;
                si = (i + (j + k) / m) % n;
                
                ans[si][sj] = grid[i][j];
            }
        }
        
        return ans;
    }
};