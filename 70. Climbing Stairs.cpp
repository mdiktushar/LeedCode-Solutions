class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2|| n == 3)
            return n;
        else {
            vector<int>v = {1, 2, 3};

            int t = 4;
            while (t <= n) {
                int N = v.size();
                int sum = v[N-1] + v[N-2];
                v.push_back(sum);
                t++;
            }
            return v.back();
        }
    }
};
