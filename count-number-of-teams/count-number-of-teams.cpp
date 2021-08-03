class Solution {
public:
    int numTeams(vector<int>& rate) {
        int count=0;
        int n=rate.size();
        int i,j,k;
        for(i=0; i<n; i++)
        {
            int ls=0, lb=0, rs=0, rb=0;
            for(j=0; j<i; j++)
            {
                if(rate[j]<rate[i])
                {
                    ls++;
                }
                else if(rate[j]>rate[i])
                {
                    lb++;
                }
            }
            
            for(k=j+1; k<n; k++)
            {
                if(rate[k]<rate[i])
                {
                    rs++;
                }
                else if(rate[k]>rate[i])
                {
                    rb++;
                }
            }
            count+=ls*rb+lb*rs;
        }
        return count;
    }
};