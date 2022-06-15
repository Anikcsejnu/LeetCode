class Solution {
public:
    string convertToTitle(int columnNumber) {
        string columnTitle = "";
        int rem = 0;
        
        while(columnNumber > 0){
            rem = (columnNumber - 1) % 26;
            columnNumber = (columnNumber - 1) / 26;
            columnTitle = char(65 + rem) + columnTitle;
        }
        
        return columnTitle;
    }
};