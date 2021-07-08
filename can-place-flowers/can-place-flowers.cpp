class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        for(int i=0; i<flowerbed.size(); i++)
        {
            if(flowerbed.size()==1)
            {
                if(flowerbed[i]==0)
                    n--; flowerbed[i]++;
            }
            if(i==0)
            {
                if(flowerbed[i]==0 && flowerbed[i+1]==0)
                    n--; flowerbed[i]++; 
            }
            else if(i==flowerbed.size()-1)
            {
                if(flowerbed[i]==0 && flowerbed[i-1]==0)
                    n--; flowerbed[i]++; 
            }
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0)
            {
                n--;
                flowerbed[i]++;
                
            }
        }
        return(n<=0);
    }
};