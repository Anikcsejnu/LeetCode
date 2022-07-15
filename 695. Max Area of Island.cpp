class Solution {
public:
    int traverse(vector<vector<int>>& grid, int row, int col) {
        if(row < 0 || col < 0 || row >= grid.size() || col >= grid[row].size()
          || grid[row][col] == 0) {
            return 0;
        }
        
        grid[row][col] = 0;
        
        return 1 + traverse(grid, row + 1, col)
                 + traverse(grid, row - 1, col)
                 + traverse(grid, row, col + 1)
                 + traverse(grid, row, col - 1);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count = 0;
        
        for(int i = 0;i < grid.size();i++) {
            for(int j = 0;j < grid[i].size();j++) {
                if(grid[i][j]) {
                    count = max(count, traverse(grid, i, j));
                }
            }
        }
        
        return count;
    }
};