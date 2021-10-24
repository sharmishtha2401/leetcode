class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, mid;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]>nums[high])
                low=mid+1;
            else if(nums[mid]<nums[high])
                high=mid;
            else
                high--;
        }
        
        
        int first=low;
        low=0; 
        high=nums.size()-1;
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            int realmid=(first+mid)%nums.size();
            if(nums[realmid]==target)
                return realmid;
            if(nums[realmid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
         
        return -1;
    }
};