class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>st;
        int R;
        for(auto i : nums)
        {
            auto r = st.insert(i);
            if (!r.second) {
                R = i;
                break;
            }
        }
        return R;
    }
};
