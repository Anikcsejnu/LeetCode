class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long int columnNumber = 0;
        int len = columnTitle.size();
        int base = 26, power = 0;
        
        for(int i = len - 1;i >= 0;i--) {
            columnNumber += ((columnTitle[i] - 64) * pow(base, power));
            power++;
        }
        
        return columnNumber;
    }
};