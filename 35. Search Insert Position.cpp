class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto point = lower_bound(nums.begin(), nums.end(), target);
        return point - nums.begin();
    }
};
