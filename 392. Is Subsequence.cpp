class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        bool f = true;
        for(int i=0; i<t.size(); i++) {
            if (s[j] == t[i]) {
                j++;
            }
            if (j == s.size()) {
                break;
            }
        }
        if (j != s.size()) {
            f = false;
        }

        return f;
    }
};
