class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int c=0;
        int sum=0;
        for(int i=cost.size()-1; i>=0; i--)
        {
            c++;
            if(c%3==0)
                continue;
            sum+=cost[i];
        }
        return sum;
    }
};