class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1, sum = 0, carry = 0;
        
        digits[i] += 1;
        
        while(i >= 0) {
            if(digits[i] != 10) return digits;
            digits[i] = 0;
            
            if(i > 0) digits[i - 1] += 1;
            else digits.insert(digits.begin(), 1);
            i--;
        }
        
        return digits;
    }
};