class Solution {
public:
    void sortColors(vector<int>& nums) {
        int sec=nums.size()-1, zer=0;
        for(int i=0; i<nums.size(); i++)
        {
            while(nums[i]==2 && i<sec)
                swap(nums[i], nums[sec--]);
            while(nums[i]==0 && zer<i)
                swap(nums[i], nums[zer++]);
        }
        
    }
    
   
};