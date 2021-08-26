class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size()==0)
            return ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(i==nums.size()-1 || nums[i+1]!=nums[i]+1 )
            {
                ans.push_back(to_string(nums[i]));
                continue;
            }
                
            string rng=to_string(nums[i])+"->";
            while(i!=nums.size()-1 && nums[i+1]==nums[i]+1)
            {
                i++;
            }
            rng+=to_string(nums[i]);
            ans.push_back(rng);
        }
        return ans;
    }
};