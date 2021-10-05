/*  Basically it's a fibbonacci sereis:
    step : ways
     1      1  {1}
     2      2  {1,1},{2}
     3      3  {1,1,1},{1,2},{2,1}
     4      5  {1,1,1,1},{1,1,2},{1,2,1},{2,1,1},{2,2}
          
 */

class Solution {
public:
    int climbStairs(int n) {
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        
        int one=1;
        int two=1;
        int total=0;
        for(int i=2; i<=n; i++)
        {
            total=one+two;
            one=two;
            two=total;
        }
        return total;
    }
};