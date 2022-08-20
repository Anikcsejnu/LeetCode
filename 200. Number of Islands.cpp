// Solve using DFS

class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int m, int n) {
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] != '1')
            return;

        grid[i][j] = '#';
        dfs(grid, i + 1, j, m, n);
        dfs(grid, i - 1, j, m, n);
        dfs(grid, i, j + 1, m, n);
        dfs(grid, i, j - 1, m, n);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0, m = grid.size(), n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    ans++;
                    dfs(grid, i, j, m, n);
                }
            }
        }

        return ans;
    }
};

// Solve using BFS

class Solution {
public:
    Solution() {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
    }
        
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0, m = grid.size(), n = grid[0].size();
        int dir[5] = {0, -1, 0, 1, 0};
        
        for(int i = 0;i < m;i++) {
            for(int j = 0;j < n;j++) {
                if(grid[i][j] == '1') {
                    queue<pair<int, int>> q;
                    
                    q.push({i, j});
                    ans++;
                    grid[i][j] = '0';
                    
                    while(!q.empty()) {
                        auto [x, y] = q.front();
                        q.pop();
                        
                        for(int k = 0;k < 4;k++) {
                            int newX = x + dir[k];
                            int newY = y + dir[k + 1];
                            
                            if(newX >= 0 && newY >= 0 && newX < m && newY < n && grid[newX][newY] == '1') {
                                grid[newX][newY] = '0';
                                q.push({newX, newY});    
                            }
                            
                        }
                    }
                }
            }
        }
        return ans;
    }
};