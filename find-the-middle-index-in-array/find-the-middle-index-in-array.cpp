class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
        }
        
        
        int first=0;
        int second=0;
        for(int i=0; i<nums.size(); i++)
        {
            
            first+=i==0?0:nums[i-1];
            second=sum-first-nums[i];
            if(first==second)
                return i;
        }
        return -1;
        
    }
};