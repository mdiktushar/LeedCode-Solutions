class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st1, st2;
        for(auto i : nums) {
            auto f = st1.insert(i);
            if (!f.second) st2.insert(i);
        }

        vector<int>v(st1.begin(), st1.end());
        for(auto i : st2)v.push_back(i);
        sort(v.begin(), v.end());

        int j = 0;
        for(int i = 0; i < nums.size() && j < v.size(); i++) {
            nums[i] = v[j]; j++;
        }
        return v.size();
    }
};
