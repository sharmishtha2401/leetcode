class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        if(nums.size()==1)
            return nums;
        
        unordered_map <int, int> freq;
        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        
        vector<pair<int, int>> s;
        
        for(auto f : freq)
        {
            s.push_back(f);
        }
        
        sort(s.begin(), s.end(), cmp);
        
        vector<int> res;
        for(auto v : s)
        {
            for(int i=0; i<v.second; i++)
            {
                res.push_back(v.first);
            }
        }
        
        return res;
    }
    
    static bool cmp(pair<int, int>& a, pair<int, int> &b)
    {
        return (a.second==b.second)?a.first>b.first:a.second<b.second;
    }
};