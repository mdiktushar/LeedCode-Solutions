class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string>v;
        string w;
        while(ss >> w) {
            v.push_back(w);
        }
        if (v.size() != pattern.length())
            return false;

        bool flag = true;
        map<char, string>m;
        map<string, char>m1;
        for(int i = 0; i < pattern.length(); i++) {
            auto r = m.insert({pattern[i], v[i]});
            if (!r.second && v[i] != m[pattern[i]]){
                flag = false;
                break;
            }
        }

        for(int i = 0; i < pattern.length(); i++) {
            auto r = m1.insert({v[i], pattern[i]});
            if (!r.second &&  pattern[i] != m1[v[i]]){
                flag = false;
                break;
            }
        }

        return flag;
    }
};
