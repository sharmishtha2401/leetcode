class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> res;
        for(int i=0; i<=nums.size(); i++)
        {
            int rem=target-nums[i];
            if(map.find(rem)!=map.end())
            {
                res.push_back(map[rem]);
                res.push_back(i);
                return res;
            }
            map[nums[i]]=i;
        }
        return {};
    }
};