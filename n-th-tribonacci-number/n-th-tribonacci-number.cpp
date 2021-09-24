class Solution {
public:
    int tribonacci(int n) {
        if(n<2)
            return n;
        if(n==2)
            return 1; 
        int a=0, b=1, c=1;
        long long int d=a+b+c;
        int i=3;
        while(i!=n)
        {
            a=b;
            b=c;
            c=d;
            d=a+b+c;
            i++;
        }
        return d;
    }
};