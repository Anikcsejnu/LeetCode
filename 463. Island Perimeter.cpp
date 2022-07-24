class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int parameter = 0;
        
        for(int i = 0;i < r;i++) {
            for(int j = 0;j < c;j++) {
                if(grid[i][j] == 1) {
                    if((i + 1 == r) || ((i + 1 < r) && (grid[i + 1][j] == 0))) parameter++;
                    if((j + 1 == c) || ((j + 1 < c) && (grid[i][j + 1] == 0))) parameter++;
                    if((i - 1 == -1) || ((i - 1 >= 0) && (grid[i - 1][j] == 0))) parameter++;
                    if((j - 1 == -1) || ((j - 1 >= 0) && (grid[i][j - 1] == 0))) parameter++;
                }
            }
        }
        
        return parameter;
    }
}; 

// dfs implementation

class Solution {
public:
    int dfs(vector<vector<int>>& grid, int r, int c) {
        
        if(r < 0 || c < 0 || r >= grid.size() 
           || c >= grid[0].size() || grid[r][c] == 0) return 1;
        
        if(grid[r][c] == 2)return 0;
        grid[r][c] = 2;
        
        return dfs(grid, r + 1, c) + dfs(grid, r - 1, c) 
            + dfs(grid, r, c + 1) + dfs(grid, r, c-1); 
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i = 0;i < grid.size();i++) {
            for(int j = 0;j < grid[0].size();j++) {
                if (grid[i][j]) {
                    ans += dfs(grid, i, j);
                    break;
                } 
            }
        } 
        
        return ans;
    }
};