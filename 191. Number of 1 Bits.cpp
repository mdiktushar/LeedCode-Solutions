class Solution {
public:
    int hammingWeight(int n) {
        string s = bitset<62>(n).to_string();
        return count(s.begin(), s.end(), '1');
    }
};
