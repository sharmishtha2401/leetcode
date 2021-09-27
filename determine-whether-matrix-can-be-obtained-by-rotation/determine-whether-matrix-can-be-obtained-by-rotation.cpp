class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target)
            return true;
        rotate(mat);
        if(mat==target)
            return true;
        rotate(mat);
        if(mat==target)
            return true;
        rotate(mat);
        if(mat==target)
            return true;
        return false;
    }
    
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
        for(int i=0; i<matrix.size(); ++i)
        {
            for(int j=i+1; j<matrix[i].size(); ++j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        } 
    }
};