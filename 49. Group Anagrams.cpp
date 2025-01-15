class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> v;
        for(auto i : strs) {
            string s = i;
            sort(s.begin(), s.end());
            v.push_back(s);
        }

        vector<vector<string>> r;
        set<string> st;

        for(auto i : v) {
            st.insert(i);
        }

        int n = v.size();
        for(auto i : st) {
            vector<string> temp;
            for(int j = 0; j < n; j++) {
                if (i == v[j]) {
                    temp.push_back(strs[j]);
                }
            }
            r.push_back(temp);
        }

        return r;
    }
};
