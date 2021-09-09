class Solution {
public:
    bool isThree(int n) {
        if(n<4)
            return false;
        int count=2;
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
                count++;
            if(count>3)
                return false;
        }
        return count==3;
    }
};

OR

/*

If you observe this closely, the numbers having exact 3 divisors are those which are a perfect square of a prime number.
So the task is to find :
i. If n is a perfect square
ii. If the square root of n is a prime number  


//Approach-2 (Slightly improved)
class Solution {
public:
    bool isThree(int n) {
        int div = 2; //1 and n are already divisors of n
        
        for(auto d = 2; d <= sqrt(n) && div < 3; d++) {
            if(n%d == 0) {
                div++;
                if(d*d != n) div++;
            }
            
        }
        
        return div==3;
    }
};

*/
