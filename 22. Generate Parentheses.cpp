class Solution {
public:
    void generate(int open, int close, string s, vector<string>&ans) {
        if (open == 0 && close == 0) {
            ans.push_back(s);
            return ;
        }
        if (open > 0) {
            string temp = s + '(';
            generate(open-1, close, temp, ans);
        }
        if(open < close) {
            string temp = s + ')';
            generate(open, close-1, temp, ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s = "";
        generate(n, n, s, ans);
        return ans;
    }
};
