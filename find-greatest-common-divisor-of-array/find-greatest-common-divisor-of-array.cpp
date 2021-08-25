class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn, mx;
        mn=*min_element(nums.begin(), nums.end());
        mx=*max_element(nums.begin(), nums.end());
        int d=gcd(mn, mx);
        return d;
    }
    
    int gcd(int a, int b)
    {
        if(a%b==0)
            return b;
        return gcd(b, a%b);
    }
};