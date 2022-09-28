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


// Optimized Time - O(N), Space - O(1)

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1, carry = 1;
        
        while(i >= 0) {
            if(digits[i] == 9 && carry == 1) {
                digits[i] = 0;
            }
            else {
                digits[i] = digits[i] + 1;  
                carry = 0;
                break;
            }
            i--;
        }
        
        if(carry == 1) {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};
