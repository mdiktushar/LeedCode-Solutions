class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        bool f = false;

        map<int, int>mp;
        
        for(int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                int n = abs(i - mp[nums[i]]);
                if (n <= k) {
                    f = true; break;
                }
            }
            mp[nums[i]] = i;
        }

        return f;
        
    }
};
