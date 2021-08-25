class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn, mx;
        mn=*min_element(nums.begin(), nums.end());
        mx=*max_element(nums.begin(), nums.end());
        return gcd(mn,mx);
        
    }
    /*
    int gcd(int a, int b)
    {
        if(a%b==0)
            return b;
        return gcd(b, a%b);
    } */
};
