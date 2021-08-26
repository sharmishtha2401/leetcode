class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        set<char> S; 
        int diff1=-1, diff2=-1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=goal[i])
            {
                if(diff1==-1)
                    diff1=i;
                else if(diff2==-1)
                    diff2=i;
                else
                    return false;
            }
            S.insert(s[i]);
        }
        if(diff1!=-1 && diff2!=-1)
        {
            if(s[diff1]==goal[diff2] && s[diff2]==goal[diff1])
                return true;
            return false;
        }
        if(diff1!=-1)
            return false;
        if(S.size()<s.size())
            return true;
        return false;
    }
};