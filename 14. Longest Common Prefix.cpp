class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        string r = "";
        int min = INT_MAX;
        for (auto v : strs) {
            int temp = v.size();
            if (temp < min) {
                min = temp;
                s = v;
            }
        }
        if (!s.size())
            return s;

        for (int i = 0; i <= s.size(); i++) {
            bool f = false;
            for (auto v : strs) {
                if (s[i] != v[i]) {
                    f = true;
                    break;
                }
            }
            if (f)
                break;
            if (s.size())
                r += s[i];
        }
        string R;
        for (char c : r) {
            if (c != '\0') {
                R += c;
            }
        }
        return R;
    }
};
