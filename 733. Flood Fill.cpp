class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] != color) {
            dfs(image, sr, sc, color, image[sr][sc]);
        }
        
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int i, int j, int color, int srcColor) {
        if(i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] != srcColor) {
            return;
        }
        
        image[i][j] = color;
        
        dfs(image, i + 1, j, color, srcColor);
        dfs(image, i - 1, j, color, srcColor);
        dfs(image, i, j + 1, color, srcColor);
        dfs(image, i, j - 1, color, srcColor);
    }
};