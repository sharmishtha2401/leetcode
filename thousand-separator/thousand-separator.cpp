class Solution {
public:
    string thousandSeparator(int n) {
        if(n==0)
            return "0";
        string res="";
        int s=0;
        while(n)
        {
            res+=to_string(n%10);
            s++;
            n/=10;
            if(s%3==0 && n!=0)
                res+='.';
        }
        reverse(res.begin(), res.end());
        return res;
    }
};