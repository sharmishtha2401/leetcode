class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int dups=0;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[i-dups]=nums[i];
            }
            else
            {
                dups++;
            }
        }
        return nums.size()-dups;
    }
};