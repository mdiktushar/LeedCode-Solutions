class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1(nums1.begin(), nums1.end());
        set<int>st2(nums2.begin(), nums2.end());
        set<int>r;

        set_intersection(st1.begin(), st1.end(),
                        st2.begin(), st2.end(),
                        inserter(r, r.begin()));

        vector<int>v(r.begin(), r.end());
        return v;
    }
};
