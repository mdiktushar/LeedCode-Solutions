class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        for (int i=n-3; i>=0; i--) {
            cost[i] = min(cost[i]+cost[i+1], cost[i]+cost[i+2]);
        }

        return min(cost[0], cost[1]);
    }
};
