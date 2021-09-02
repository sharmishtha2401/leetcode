class Solution {
public:   
    int add(int n)
    {
        int s=0;
        while(n)
        {
            s+=n%10;
            n=n/10;
        }
        return s;
    }
    
    int getLucky(string s, int k) {
        int sum=0;
        for(char &ch : s)
        {
            int val=ch-'a'+1;
            sum+=val<10 ? val : (val%10 + val/10);
        }
        k-=1;
        while(k && sum>9)
        {
            sum=add(sum);
            k--;
        }
        return sum;
    }
};