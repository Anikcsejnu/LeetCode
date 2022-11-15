// Naive solution, Time Complexity O(N^2)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, area = 0, n = height.size();
        for(int i = 0;i < n - 1;i++) {
            for(int j = i + 1;j < n;j++) {
                area = min(height[i], height[j]) * (j - i);
                ans = max(area, ans);
            }
        }
        return ans;
    }
};

// Using Two Pointer
// Time Complexity O(N)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, area = 0, n = height.size();
        int start = 0, end = n - 1;
        
        while(start < end) {
            area = min(height[start], height[end]) * (end - start);
            ans = max(ans, area);
            
            if(height[start] > height[end]) {
                end--;
            }
            else {
                start++;
            }
        }
        return ans;
    }
};

// Solve at 15 Nove

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int ans = INT_MIN;
        
        while(left < right) {
            int minHeight = min(height[left], height[right]);
            ans = max(ans, (minHeight * (right - left)));
            
            if(height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return ans;
    }
};

