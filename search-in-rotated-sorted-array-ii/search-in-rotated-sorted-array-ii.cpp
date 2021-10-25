class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo=0, hi=nums.size()-1, mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
                return true;
            
            if(nums[mid]>nums[hi])
            {
                if(nums[lo]<=target && nums[mid]>target)
                    hi=mid-1;
                else
                    lo=mid+1;
            }
            else if(nums[mid]<nums[hi])
            {
                if(nums[mid+1]<=target && nums[hi]>=target)
                    lo=mid+1;
                else
                    hi=mid-1;
            }
            else
                hi--;
                     
        }
        return nums[lo]==target ? true : false;
    }
};