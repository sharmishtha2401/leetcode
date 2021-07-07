class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> s;
        for(int i=0; i<paths.size(); i++)
        {
            s.push_back(paths[i][0]);
        }
        for(int i=0; i<paths.size(); i++)
        {
            if(find(s.begin(), s.end(), paths[i][1])==s.end())
                return paths[i][1];
        }
        return "";
        
    }
};