class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>v = nums;
        
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int A = nums[n-1];
        int B = nums[n-2];
        B *= 2;
        if (A >= B) {
            int j = 0;
            for(auto i : v)
            {
                if (i == A) break;

                j++;
            }
            return j;
        };
        return -1; 
    }
};
