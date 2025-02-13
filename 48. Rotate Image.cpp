class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> v;
        int I = 0, J = 0;
        for (int j = 0; j < n; j++)  {
            vector<int>temp;
            for (int i = n-1; i > -1; i--) {
                temp.push_back(matrix[i][j]);
            }
            v.push_back(temp);
        }

        for(int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                matrix[i][j] = v[i][j];
            }
        }
    }
};
