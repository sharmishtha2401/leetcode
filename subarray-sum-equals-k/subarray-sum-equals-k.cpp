class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int, int> mp;
        int count=0;
        mp[0]++;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            count+=mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};