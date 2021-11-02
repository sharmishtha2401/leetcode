class Solution {
public:
   void solve(vector<vector<char>>& b) {
        int m = b.size();
        if(m == 0) return;
        int n = b[0].size();
        
        for(int i = 0; i < n; i++) {
            if(b[0][i] == 'O') 
                dfs(b, 0, i);
            if(b[m - 1][i] == 'O')
                dfs(b, m - 1, i);
        }
        
        for(int i = 0; i < m; i++) {
            if(b[i][0] == 'O') 
                dfs(b, i, 0);
            if(b[i][n - 1] == 'O')
                dfs(b, i, n - 1);
        }
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(b[i][j] == 'O')
                    b[i][j] = 'X';
                
                if(b[i][j] == 'P')
                    b[i][j] = 'O';
            }
        }
    }
    
    void dfs(vector<vector<char>>& b, int x, int y) {
        if(x >= 0 && x < b.size() && y >= 0 && y < b[0].size() && b[x][y] == 'O') {
            b[x][y] = 'P';
            dfs(b, x + 1, y);
            dfs(b, x, y + 1);
            dfs(b, x - 1, y);
            dfs(b, x, y - 1);
        } else return;
    }
};