class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(auto w : words)
        {
            mp[w]++;
        }
        
        vector<pair<string,int>> v;
        
        for(auto m : mp)
        {
            v.push_back({m.first, m.second});
        }
        
        sort(v.begin(), v.end(), compare);
        
        vector<string> ans;
        
        for(int i=0; i<k; i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
    
    static bool compare(pair<string,int> p1, pair<string, int> p2 )
    {
        if(p1.second>p2.second || (p1.second==p2.second && p1.first<p2.first))
            return true;
        return false;
    }
};