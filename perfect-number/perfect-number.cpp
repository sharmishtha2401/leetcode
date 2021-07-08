class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        int i;
        for(i=1; i<=num/2; i++)
        {
            if(num%i==0)
            {
                
                sum+=i;
            }
            
        }
        if(sum==num)
                return true;
        return false;
        
    }
};
/*
bool checkPerfectNumber(int num) {
        int sum=1;
        for(int i=2;i<=sqrt(num);i++) if(num%i==0) sum += i + (i==num/i ? 0 : num/i);
        return sum==num && num!=1;
    }
*/
