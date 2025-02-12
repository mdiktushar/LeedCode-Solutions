class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>v;
        int D = s.size();
        int I = 0;
        long long int sum = D*(D+1)/2;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'I') {
                v.push_back(I);
                sum -= I;
                I++;
            }
            else {
                v.push_back(D);
                sum -= D;
                D--;
            }
        }
        v.push_back(sum);
        return v;
    }
};
