class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;
        int max=2147483647;
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i]<max)
            {
                max=nums[i];
                count++;
            }
            if(count==3)
                break;
            
        }
        if(count!=3)
            return nums[nums.size()-1];
        return max;
        
        
    }
};