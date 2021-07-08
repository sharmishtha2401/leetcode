class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count=k;
        for(int i=0; i<nums.size(); i++)
        {
            if(!nums[i])
            {
                count++;
            }
            else
            {
                if(count<k)
                    return false;
                count=0;
            }
        }
        return true;
        
    }
};