class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size() && k>0; i++)
        {
           if(nums[i]>=0)
               break;
            nums[i]*=-1;
            k--;
        }
        sort(nums.begin(), nums.end());
        if(k%2)
            nums[0]*=-1;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
        }
        return sum;
    }
};