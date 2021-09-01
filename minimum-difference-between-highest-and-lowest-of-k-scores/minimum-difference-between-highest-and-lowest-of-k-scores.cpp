class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int diff=INT_MAX;
        for(int i=k-1; i<nums.size(); i++)
        {
            diff=min(diff, nums[i]-nums[i-k+1]);
        }
        return diff;
    }
};