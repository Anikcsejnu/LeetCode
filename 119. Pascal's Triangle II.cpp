class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<vector<int>> pascalTriangle(rowIndex + 1);
        
        for(int i = 0;i <= rowIndex;i++) {
            pascalTriangle[i].resize(i + 1);
            
            pascalTriangle[i][0] = pascalTriangle[i][i] = 1;
            
            for(int j = 1;j < i;j++) {
                pascalTriangle[i][j] = pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j];
            }
        }
        
        return pascalTriangle[rowIndex];
    }
};