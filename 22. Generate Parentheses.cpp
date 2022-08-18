class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n, 0, 0, "", result);
        return result;
    }
    
    void generate(int n, int openCnt, int closeCnt, string s, vector<string> &result) {
        if(openCnt == n && closeCnt == n){
            result.push_back(s);
            return;
        }

        if(openCnt < n) {
            generate(n, openCnt + 1, closeCnt, s + '(', result);
        }
        
        if(openCnt > closeCnt) {
            generate(n, openCnt, closeCnt + 1, s + ')', result);
        }
    }
};