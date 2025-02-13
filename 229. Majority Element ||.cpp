class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int m = n / 3;
        set<int>st(nums.begin(), nums.end());
        vector<int>v;

        for(auto i : st){
            int c = count(nums.begin(), nums.end(), i);
            if (c > m){
                v.push_back(i);
            }
            if (v.size() > 1) {
                break;
            }
        }

        return v;

    }
};
