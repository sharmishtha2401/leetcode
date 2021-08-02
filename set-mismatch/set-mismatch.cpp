class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int total=(n*(n+1))/2;
        int sum=0;
        int miss, dup;
        for(int i=0; i<n; i++)
        {
            sum+=abs(nums[i]);
            if(nums[abs(nums[i])-1]<0)
            {
                dup=abs(nums[i]);
            }
            nums[abs(nums[i])-1]=-1*nums[abs(nums[i])-1];
        }
        miss=total-sum+dup;
        return {dup,miss};
    }
};