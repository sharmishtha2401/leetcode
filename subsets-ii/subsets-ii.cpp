class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start=0;
        vector<vector<int>> subs;
        vector<int> sub;
        subset(nums, start, sub, subs);
        return subs;
    }
    
    void subset(vector<int>& nums, int start, vector<int>& sub, vector<vector<int>>& subs)
    {
        subs.push_back(sub);
        for(int i=start; i<nums.size(); i++)
        {
            if(i>start && nums[i]==nums[i-1])
                continue;
            sub.push_back(nums[i]);
            subset(nums, i+1, sub, subs);
            sub.pop_back();
        }
    }
};