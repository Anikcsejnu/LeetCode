class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = n - 1, row = 0;
        
        while(row < m) {
            int mid = (left + right) / 2;
            
            if(target > matrix[row][mid]) {
                left = mid + 1;
            }
            else if(target < matrix[row][mid]) {
                right = mid - 1;
            }
            else {
                return true;
            }
            
            if (left > right) {
                row++;
                left = 0;
                right = n - 1;
            }
        }
        
        return false;
        
    }
};