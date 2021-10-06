class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto m : mp)
        {
            if(m.second==2)
                ans.push_back(m.first);
        }
        return ans;
    }
};