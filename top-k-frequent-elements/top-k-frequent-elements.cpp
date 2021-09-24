class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        
        priority_queue<pair<int, int>> q;
        for(auto m : mp)
        {
            q.push({m.second, m.first});
        }
        
        vector<int> ans;
        while(!q.empty() && k--)
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
        
    }
};