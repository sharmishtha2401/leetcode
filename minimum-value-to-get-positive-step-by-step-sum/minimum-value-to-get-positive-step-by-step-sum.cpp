class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int mn=INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            mn=min(sum,mn);
        }
        if(mn>0)
            return 1;
        return 1-mn;
        
    }
};