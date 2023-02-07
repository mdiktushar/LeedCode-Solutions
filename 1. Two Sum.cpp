class Solution {
public
    vectorint twoSum(vectorint& nums, int target) {
        int n = nums.size();
        vectorint res;
        for(int i=0; in; i++) {
            for (int j=i+1; jn; j++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};