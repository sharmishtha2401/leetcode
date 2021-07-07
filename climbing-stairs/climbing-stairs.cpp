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