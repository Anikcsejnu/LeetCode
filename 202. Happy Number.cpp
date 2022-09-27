class Solution {
public:
    int squareSum(int n) {
        int sum = 0;
        
        while(n > 0) {
            int digit = n % 10;
            sum += pow(digit, 2);
            n = n / 10;
        }
        
        return sum;
    }
    bool isHappy(int n) {
        set<int> st;
        
        while(st.count(n) != 1) {
            st.insert(n);
            n = squareSum(n);
            
            if(n == 1) 
                return true;
        }
        
        return false;
    }
};