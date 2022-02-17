class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int n : nums)
        {
            mp[n]++;
        }
        for(auto k : mp)
        {
            if(k.second==1)
                return k.first;
        }
        return 0;
    }
};