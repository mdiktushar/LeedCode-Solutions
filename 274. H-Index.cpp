class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        for(int i = n; i>=0; i--) {
            int c = 0;

            for(auto j : citations) {
                if (j >= i)c++;
            }

            if (c >= i )return i;
        }
        return 0;
    }
};
