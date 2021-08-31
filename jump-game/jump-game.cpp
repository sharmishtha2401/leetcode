class Solution {
public:
    bool canJump(vector<int>& nums) {
         int reach=0,i;
        for(i=0; i<nums.size(); i++)
        {
            if(i>reach)
                return false;
            reach=max(i+nums[i], reach);
        }
        return i==nums.size();
    }
};
