class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9), col(9), block(9);
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j]=='.')
                    continue;
                
                int num=board[i][j];
                
                if(row[i].count(num) || col[j].count(num) || block[(i/3*3)+j/3].count(num))
                    return false;
                
                row[i].insert(num);
                col[j].insert(num);
                block[(i/3*3)+j/3].insert(num);
            }
        }
        return true;
    }
};