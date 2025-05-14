class Solution {
public:
    bool isHappy(int n) {
        set<int>st;
        st.insert(n);
        while(1)
        {
            int sum = 0;
            while (n){
                sum += pow(n % 10, 2);
                n = n/10;
            }

            if (sum == 1) return true;

            auto check = st.insert(sum);

            if (!check.second) return false;
            
            n = sum;
        }
    }
};
