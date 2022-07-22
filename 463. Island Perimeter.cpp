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