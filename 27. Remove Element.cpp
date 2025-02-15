class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v;
        for(int i=0; i<nums.size(); i++) {
            if (nums[i] == val) continue;
            v.push_back(nums[i]);
        }
        int j = 0;
        for(int i = 0; i < v.size(); i++) {
            nums[j] = v[i]; j++;
        }

        return v.size();
    }
};
