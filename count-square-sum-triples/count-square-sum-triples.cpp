class Solution {
public:
    int countTriples(int n) {
        int a,b,c;
        int count=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1+1; j<=n; j++)
            {
                int m=(i*i)+(j*j);
                int c=sqrt(m);
                if(c*c==m && c<=n)
                    count++;
            }
        }
        return count;
    }
};