class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int island=0, adj=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                {
                    island++;
                    if(i<grid.size()-1 && grid[i+1][j]==1)
                        adj++;
                    if(j<grid[0].size()-1 && grid[i][j+1]==1)
                        adj++;
                }
            }
        }
        return 4*island-2*adj;
        
    }
};