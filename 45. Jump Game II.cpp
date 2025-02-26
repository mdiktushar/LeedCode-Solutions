class Solution {
public:
    int jump(vector<int>& nums) {
        int sj = 0;
        int e = 0;
        int f = 0;

        for(int i=0; i < nums.size()-1; i++) {
            f = max(f, i+nums[i]);
            if (i == e) {
                sj++;
                e = f;
            }
        }

        return sj;
    }
};
