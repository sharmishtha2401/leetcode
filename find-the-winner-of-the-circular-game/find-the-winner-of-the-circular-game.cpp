class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1; i<=n; i++)
        {
            q.push(i);
        }
        while(q.size()!=1)
        {
            int x=k;
            while(x>1)
            {
                int r=q.front();
                q.pop();
                q.push(r);
                x--;
            }
            q.pop();
        }
        return q.front();
        
    }
};
OR
/*
int findTheWinner(int n, int k) {
        int res = 0;
        for (int i = 1; i <= n; ++i)
            res = (res + k) % i;
        return res + 1;
    } */
