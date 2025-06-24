class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int flag = 0;

        for(auto i : arr1) {
            for(auto j : arr2) {
                if (abs(i-j) <= d) {
                    flag++;
                    break; 
                }
            }
        }

        return arr1.size() - flag;
    }
};
