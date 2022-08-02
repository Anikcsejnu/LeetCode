// Brute force

class Solution {
public:
    int getSum(int a, int b) {
        int c = 0;
        
        if (b < 0) {
            c = -1 * b;
            for(int i = 0;i < c;i++) {
                a--;
            }
        }
        else {
            c = b;
            for(int i = 0;i < c;i++) {
                a++;
            }
        }
        return a;
        
    }
};

// Used bit manupulation

class Solution {
public:
    int getSum(int a, int b) {
        
        int sum = 0, carry = 0, res = 0;
        
        for(int i = 0;i < 32;i++){
            int d1 = a & 1, d2 = b & 1;
            
            if(d1 == 0 && d2 == 0) {
                sum = carry == 0 ? 0 : 1;
                carry = 0;
            }
            else if(d1 == 1 && d2 == 1) {
                sum = carry == 0 ? 0 : 1;
                carry = 1;
            }
            else {
                sum = carry == 0 ? 1 : 0;
            }
            
            res |= sum << i;
            a = a >> 1;
            b = b >> 1;
        }
        
        return res;
    }
}; 