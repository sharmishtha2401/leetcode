class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int t=0;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]<=nums[i-1])
            {
                t++;
                if(i>1 && nums[i]<=nums[i-2])
                    nums[i]=nums[i-1];
            }
        }
        
        return t<2;
    }
};