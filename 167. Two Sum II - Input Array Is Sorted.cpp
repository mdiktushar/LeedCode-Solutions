class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size() - 1;
        int i = 0;
        vector<int>v;
        while(i < n) {
            int temp = numbers[i] + numbers[n];

            if (temp > target)
                n--;
            else if (temp < target)
                i++;
            else if (temp == target)
            {
                v.push_back(i+1);
                v.push_back(n+1);
                return v;
            }
        }
        v.push_back(i+1);
        v.push_back(n+1);
        return v;
    }
};
