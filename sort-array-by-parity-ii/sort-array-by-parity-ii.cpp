class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even=0, odd=1;
        while(even<nums.size() && odd<nums.size())
        {
            if(nums[even]%2 && !(nums[odd]%2))
            {
                swap(nums[even], nums[odd]);
            }
            if(!(nums[even]%2))
                even+=2;
            if(nums[odd]%2)
                odd+=2;
        }
        return nums;
    }
};