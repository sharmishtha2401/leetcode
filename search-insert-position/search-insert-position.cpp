class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0, j=nums.size()-1;
        while(i<=j)
        {
            int mid=j-1/2+i;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                i=mid+1;
            else
                j=mid-1;
        }
        return i;
        
    }
};