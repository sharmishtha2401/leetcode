class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=2*nums.size();
        vector<int> ans(n);
        for(int i=0; i<nums.size(); i++)
        {
            ans[i]=nums[i];
            ans[i+nums.size()]=nums[i];
        }
        return ans;
        
    }
};

/*
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
}; */
