// Binary Search approach

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
};\


// Linear search approach

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int size = (row * col);
        
        for(int i = 0;i < size;i++) {
            if (target == matrix[i/col][i%col]) 
                return true;
        }
        return false;
        
    }
};

// Linear approach with GO

func searchMatrix(matrix [][]int, target int) bool {
    row := len(matrix)
    col := len(matrix[0])
    size := row * col
    
    for i := 0;i < size;i++ {
        if(matrix[i/col][i%col] == target) {
            return true;
        }
    }
    
    return false
    
}

// GO binary Search

func searchMatrix(matrix [][]int, target int) bool {
    row := len(matrix)
    col := len(matrix[0])
    end := (row * col) - 1
    start, mid := 0, 0 
    
    for start <= end {
        mid = (start + end) / 2
        
        if matrix[mid/col][mid%col] < target {
            start = mid + 1
        } else if matrix[mid/col][mid%col] > target {
            end = mid - 1
        } else {
          return true
        }
    }
    return false
}