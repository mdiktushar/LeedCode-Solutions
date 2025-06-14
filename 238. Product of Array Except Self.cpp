class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v1 = {1}, v2{1};
        vector<int>v;
        int temp = nums.front();
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
            v1.push_back(temp);
            temp *= nums[i];
        }

        reverse(nums.begin(), nums.end());
        temp = nums.front();
        
        for(int i = 1; i < n; i++)
        {
            v2.push_back(temp);
            temp *= nums[i];
        }
        reverse(v2.begin(), v2.end());

        for(int i = 0; i < n; i++) {

            v.push_back(v1[i] * v2[i]);
        }

        return v;
    }
};
