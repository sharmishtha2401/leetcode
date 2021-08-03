class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        vector<int> sub;
        subset(nums, 0, sub, subs);
        return subs;
    }
    
    void subset(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subs)
    {
        subs.push_back(sub);
        for(int j=i; j<nums.size(); j++)
        {
            sub.push_back(nums[j]);
            subset(nums, j+1, sub, subs);
            sub.pop_back();
        }
    }
};