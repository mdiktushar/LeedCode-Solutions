class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l = 0;
        if(digits.back() != 9)
       {
            digits.back()++;
            l = digits.back();
       }
       else
       {
           reverse(digits.begin(), digits.end());
           int n = digits.size();
           for(int i = 0; i<n; i++)
           {
               if(digits[i] == 9 && l == 0)
               {
                   digits[i] = 0;
               }
               else
               {
                   digits[i]++;
                   l = digits[i];
                   break;
               }

           }
           if(l == 0) digits.push_back(1);
           reverse(digits.begin(), digits.end());
       }
        return digits;
    }
};