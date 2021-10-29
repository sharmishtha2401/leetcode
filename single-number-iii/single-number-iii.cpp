class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int flag=0;
        vector<int> ans;
        for(auto m : mp)
        {
            if(m.second==1)
                ans.push_back(m.first), flag++;
            if(flag==2)
                break;
        }
        return ans;
    }
};