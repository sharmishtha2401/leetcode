class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int is_zero=0;
        int flag=0;
        for(int i=0; i<nums.size();  i++)
        {
            if(nums[i]==0)
            {
                is_zero++;
                continue;
            }
            prod*=nums[i];
        }
        if(is_zero!=0)
            flag=1;
        
        vector<int> product;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0 && is_zero>1)
            {
                product.push_back(0);
            }
            else if(nums[i]!=0 && is_zero!=0)
            {
                product.push_back(0);
            }
            else if(nums[i]==0 && is_zero==1)
            {
                product.push_back(prod);
            }
            else if(nums[i]!=0)
            {
                product.push_back(prod/nums[i]);
            }
        }
        return product;
    }
};