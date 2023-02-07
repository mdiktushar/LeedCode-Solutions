class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string copy = s;
        bool result = false;
        reverse(copy.begin(), copy.end());
        if (s == copy) {
            result = true;
        }
        return result;
    }
};