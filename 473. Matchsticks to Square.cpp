class Solution {
public:
    int a, b, c, d;
    bool CanMake(vector<int>& matchsticks, int index) {
        if (index == matchsticks.size())
            return (a == 0 && b == 0 && c == 0 && d == 0);
        
        if (a >= matchsticks[index]) {
            a -=matchsticks[index];
            if(CanMake(matchsticks, index + 1)) return true;
            a += matchsticks[index];
        }
        
        if (b >= matchsticks[index]) {
            b -=matchsticks[index];
            if(CanMake(matchsticks, index + 1)) return true;
            b += matchsticks[index];
        }
        
        if (c >= matchsticks[index]) {
            c -=matchsticks[index];
            if(CanMake(matchsticks, index + 1)) return true;
            c += matchsticks[index];
        }
        
        if (d >= matchsticks[index]) {
            d -=matchsticks[index];
            if (CanMake(matchsticks, index + 1)) return true;
            d += matchsticks[index];
        }
        
        return false;
        
        
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum = 0;
        if (matchsticks.size() < 4) return false;
        
        
        for(auto stick: matchsticks) sum += stick;
        
        if (sum % 4 != 0) return false;
        
        a = b = c = d = sum / 4;
        
        sort(matchsticks.rbegin(), matchsticks.rend());

        bool ans = CanMake(matchsticks, 0);
        
        return ans;
        
    }
};