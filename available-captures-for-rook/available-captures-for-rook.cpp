class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int m,n;
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if(board[i][j]=='R')
                {
                    m=i; n=j;
                }
            }
        }
        
        int count=0;
        
        int i=m, j=n;
        while(i>=0 && board[i][j]!='B')
        {
            if(board[i][j]=='p')
            {
                count++;
                break;
            }
            i--;
        }
        
        i=m, j=n;
        while(i<8 && board[i][j]!='B')
        {
            if(board[i][j]=='p')
            {
                count++;
                break;
            }
            i++;
        }
        
        i=m, j=n;
        while(j>=0 && board[i][j]!='B')
        {
            if(board[i][j]=='p')
            {
                count++;
                break;
            }
            j--;
        }
        
        i=m, j=n;
        while(j<8 && board[i][j]!='B')
        {
            if(board[i][j]=='p')
            {
                count++;
                break;
            }
            j++;
        }
        return count;
        
    }
};