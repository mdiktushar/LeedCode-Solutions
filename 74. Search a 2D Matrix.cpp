class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>v;
        for(auto i : matrix) {
            for(auto j : i) {
                v.push_back(j);
            }
        }
        if (binary_search(v.begin(), v.end(), target)) {
            return true;
        }
        return false;
    }
};
