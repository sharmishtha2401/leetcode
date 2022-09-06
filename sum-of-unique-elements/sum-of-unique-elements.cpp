class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int, int> mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        for(auto i : mp)
        {
            if(i.second==1)
                sum+=i.first;
        }
        return sum;
    }
};