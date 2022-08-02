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