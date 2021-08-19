class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if(dfs_search(board, i, j, word, 0))
                    return true;
            }
        }
        return false;
    }
    
    bool dfs_search(vector<vector<char>>& board, int i, int j, string& word, int idx)
    {
        if(idx==word.size())
            return true;
        if(i<0 || i>board.size()-1 || j<0 || j>board[0].size()-1)
            return false;
        if(board[i][j]!=word[idx])
            return false;
        board[i][j]='*';
        bool nxt=dfs_search(board, i+1, j, word, idx+1) || 
                  dfs_search(board, i-1, j, word, idx+1) || 
                  dfs_search(board, i, j+1, word, idx+1) || 
                  dfs_search(board, i, j-1, word, idx+1);
        board[i][j]=word[idx];
        return nxt;
    }
    
};