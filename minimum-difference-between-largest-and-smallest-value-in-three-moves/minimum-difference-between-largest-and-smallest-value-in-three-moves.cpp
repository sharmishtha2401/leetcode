class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<5)
            return 0;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        return min({nums[n-1]-nums[3], nums[n-4]-nums[0], nums[n-2]-nums[2], nums[n-3]-nums[1]});
    }
};