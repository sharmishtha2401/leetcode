class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        for(int i=0; i<matrix.size(); i++)
        {
            if(matrix[i][0]>target)
                break;
            if(matrix[i][0]==target)
            {
                return true;
            }
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }
                
                if(matrix[i][j]>target)
                {
                    break;
                }
            }
        }
        return ans;
    }
};