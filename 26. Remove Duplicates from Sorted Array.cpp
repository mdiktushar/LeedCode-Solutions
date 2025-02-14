class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st(nums.begin(), nums.end());
        int j = 0;
        for(auto i : st) {
            nums[j] = i; j++;
        }
        return st.size();
    }
};
