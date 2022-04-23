class Solution {
public:
    int minimumMoves(string s) {
        int move = 0, len = s.size();
        
        for (int i = 0;i < len;i++) {
            if (s[i] == 'X') {
                move++;
                i += 2;
            }   
        }
        
        return move;
        
    }
};