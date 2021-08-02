class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count=0;
        vector<int> row(m+1,0);
        vector<int> col(n+1,0);
        for(int i=0; i<indices.size(); i++)
        {
            row[indices[i][0]]++;
            col[indices[i][1]]++;
        }
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if((row[i]+col[j])%2!=0)
                    count++;
            }
        }
        return count;
    }
};