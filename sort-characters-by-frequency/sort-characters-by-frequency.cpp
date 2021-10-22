class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(int i=0; i<s.size(); i++)
        {
            freq[s[i]]++;
        }
        
        priority_queue<pair<int, char>> p;
        for(auto mp : freq)
        {
            p.push({mp.second, mp.first});
        }
        
        string ans="";
        while(!p.empty())
        {
            ans+=string(p.top().first, p.top().second);
            p.pop();
        }
        return ans;
    }
};