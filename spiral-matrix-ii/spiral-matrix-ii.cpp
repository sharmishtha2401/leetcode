class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int k=1;
        int left=0, right=n-1, up=0, down=n-1;
        vector<vector<int>> matrix(n, vector<int>(n));
        int direction=1;
        while(left<=right && up<=down)
        {
            if(direction==1)
            {
                for(int i=left; i<=right; i++)
                {
                    matrix[up][i]=k++;
                }
                direction=2;
                up++;
            }
            
            else if(direction==2)
            {
                for(int i=up; i<=down; i++)
                {
                    matrix[i][right]=k++;
                    
                }
                direction=3;
                right--;
            }
            
            else if(direction==3)
            {
                for(int i=right; i>=left; i--)
                {
                    matrix[down][i]=k++;
                }
                direction=4;
                down--;
            }
            else if(direction==4)
            {
                for(int i=down; i>=up; i--)
                {
                    matrix[i][left]=k++;
                }
                direction=1;
                left++;
            }
            
        }
        return matrix;
        
    }
};