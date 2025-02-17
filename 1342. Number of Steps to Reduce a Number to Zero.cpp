class Solution {
public:
    int helper(int num, int step) {
        if (num == 0)
            return step;
        else if (num % 2 == 0)
            return helper(num/2, step+1);
        else 
            return helper(num-1, step+1);
    }
    int numberOfSteps(int num) {
        return helper(num, 0);
    }
};
