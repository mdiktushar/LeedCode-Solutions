class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char>M1, M2;
        bool f = true;
        for(int i=0; i <= s.length(); i++) {
            auto p = M1.insert({s[i], t[i]});
            if (!p.second && M1[s[i]] != t[i]){
                 f = false;
                 break;
            }
        }
        if (f) {
            for(int i=0; i <= s.length(); i++) {
                auto p = M2.insert({t[i], s[i]});
                if (!p.second && M2[t[i]] != s[i]){
                    f = false;
                    break;
                }
            }
        }

        return f;
    }
};
