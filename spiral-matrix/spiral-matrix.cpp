class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0, up=0, right=m-1, down=n-1;
        vector<int> ans;
        int direction=1;
        while(left<=right && up<=down)
        {
            if(direction==1)
            {
                for(int i=left; i<=right; i++)
                {
                    ans.push_back(matrix[up][i]);
                }
                direction=2;
                up++;
            }
            
            else if(direction==2)
            {
                for(int i=up; i<=down; i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                direction=3;
                right--;
            }
            
            else if(direction==3)
            {
                for(int i=right; i>=left; i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                direction=4;
                down--;
            }
            else if(direction==4)
            {
                for(int i=down; i>=up; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                direction=1;
                left++;
            }
            
        }
        
        return ans;
    }
};