class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        vector<int>v(nums);

        sort(v.begin(), v.end());

        auto it = find(nums.begin(), nums.end(), v[n-1]);
        return distance(nums.begin(), it);
    }
};
