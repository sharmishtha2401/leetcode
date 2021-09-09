class Solution {
public:
    int maxIceCream(vector<int>& cost, int coin) {
        sort(cost.begin(), cost.end());
        int count=0;
        int i=0;
        while(i<cost.size())
        {
            
            if(cost[i]>coin)
                break;
            count++;
            coin-=cost[i];
            i++;
        }
        return count;
    }
};