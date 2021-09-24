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

OR

class Solution {
public:
    int tribonacci(int n) {
        vector<long long int> T(38,0);
        T[0]=0;
        T[1]=1;
        T[2]=1;
        for(int i=3; i<=n; i++)
        {
            T[i]=T[i-1]+T[i-2]+T[i-3];
        }
        return T[n];
        
    }
};
