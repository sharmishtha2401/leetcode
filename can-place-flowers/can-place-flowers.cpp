class Solution {
public:
    bool canPlaceFlowers(vector<int>& bed, int n) {
        int size=bed.size();
        for(int i=0; i<size; i++)
        {
            if(bed[i]==0 && (i==0 || bed[i-1]==0) && (i==size-1 || bed[i+1]==0))
            {
                bed[i]=1;
                n--;
            }
        }
        return(n<=0);
    }
};
