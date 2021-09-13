class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
        {
            int tofind=target-nums[i];
            if(hashmap.find(tofind)!=hashmap.end())
            {
                res.push_back(hashmap[tofind]);
                res.push_back(i);
                return res;
            }
            hashmap[nums[i]]=i;
        }
        return {};
    }
};