class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if((r*c)!=(mat.size()*mat[0].size()))
            return mat;
        int n=mat[0].size();
        vector<vector<int>> ans(r, vector<int>(c));
        for(int i=0; i<r*c; i++)
        {
            ans[i/c][i%c]=mat[i/n][i%n];
        }
        return ans;
    }
};