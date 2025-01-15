class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> v;
        int n = A.size();
        for(int i=0; i<n; i++) {
            int c = 0;
            for(int j=0; j <= i; j++) {
                for(int k=0; k <= i; k++) {
                    if (A[j] == B[k])
                        c++;
                }
            }
            v.push_back(c);
        }
        return v;
    }
};
