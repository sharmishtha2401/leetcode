class Solution {
public:
    string makeFancyString(string s) {
        if(s.size()<=2)
            return s;
        string ans="";
        int i;
        ans.push_back(s[0]);
        for(i=1; i<s.size()-1; i++)
        {
            if(s[i]==s[i-1] && s[i]==s[i+1])
            {
                continue;
            }
            ans.push_back(s[i]);
        }
        
        ans.push_back(s[i]);
        return ans;
        
    }
};