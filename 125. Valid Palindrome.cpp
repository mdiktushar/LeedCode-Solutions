class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
        string r1,r2;
        for(int i=0; i<s.size(); i++){
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                r1.push_back(s[i]);
            }
        }


        r2 = r1;
        reverse(r2.begin(), r2.end());

        return r2 == r1;
    }
};
