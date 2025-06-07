class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if (!nums.size())
            return 0;
        
        set<int> st(nums.begin(), nums.end());
        vector<int> v(st.begin(), st.end());

        int l = 1;
        int temp = 1;

        for (int i = 0; i < v.size(); i++) {
            if (i == v.size() - 1)
                continue;

            if (v[i] == v[i + 1] - 1)
                temp++;
            else {
                l = max(temp, l);
                temp = 1;
            }
        }
        l = max(temp, l);
        return l;
    }
};
