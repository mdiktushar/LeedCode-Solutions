class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int temp = k/n;
        k -= temp*n;
        int i = n-k;
        vector<int>v;
        while(i < n) {
            v.push_back(nums[i]);
            i++;
        }
        for(int j=0; j < n-k; j++){
            v.push_back(nums[j]);
        }
        nums = v;
    }
};
