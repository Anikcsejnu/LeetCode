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