class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>r;
        vector<int>v = {1};
        r.push_back(v);
        if (numRows == 1)return r;
        v = {1,1};
        r.push_back(v);
        if (numRows == 2) return r;
        else {
            numRows -= 2;
            while(numRows) {
                vector<int>V = {1};
                for(int i=0; i<v.size()-1; i++) {
                    int temp = v[i] + v[i+1];
                    V.push_back(temp);
                }
                V.push_back(1);
                v = V;
                r.push_back(V);
                numRows--;
            }
        }
        return r;
    }
};
