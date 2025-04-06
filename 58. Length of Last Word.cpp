class Solution {
public:
    int lengthOfLastWord(string s) {
        string word;
        stringstream ss(s);
        vector<string>v;

        while(ss >> word){
            v.push_back(word);
        }

        return v.back().length();
    }
};
