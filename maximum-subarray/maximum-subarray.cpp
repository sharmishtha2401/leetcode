class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int smax=INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            smax=max(smax,sum);
            if(sum<0)
                sum=0;
        }
        return smax;
    }
};