class Solution {
public:
    int arrangeCoins(int n) {
        int r = 0;
        long long int sum = 0;
        for(int i = 1; ; i++){
            sum += i;
            if (sum > n){
                break;
            }
            r++;
        }
        return r;
    }
};
