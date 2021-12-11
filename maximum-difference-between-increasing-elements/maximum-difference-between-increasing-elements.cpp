class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff=0;
        int minimum=INT_MAX;
        for(int n : nums)
        {
            if(n<minimum)
                minimum=n;
            if(n-minimum>diff)
                diff=n-minimum;
        }
        return diff==0?-1:diff;
    }
};