class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dup;
        set<int> check;
        for(int i=0; i<nums.size(); i++)
        {
            if(check.find(nums[i])!=check.end())
                dup.push_back(nums[i]);
            else
                check.insert(nums[i]);
        }
        return dup;
    }
};