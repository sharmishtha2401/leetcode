class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ana;
        for(auto s : strs)
        {
            string str=s;
            sort(str.begin(), str.end());
            ana[str].push_back(s);
        }
        vector<vector<string>> res;
        for(auto m : ana)
        {
            res.push_back(m.second);
        }
        return res;
    }
};