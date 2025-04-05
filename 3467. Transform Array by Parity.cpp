class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int z = 0;
        int o = 0;
        for (auto i : nums) {
            if (i % 2)
                o++;
            else z++;
        }
        vector<int>v;
        while(z) {
            v.push_back(0); z--;
        }
        while(o)
        {
             v.push_back(1); o--;
        }
        return v;
    }
};
