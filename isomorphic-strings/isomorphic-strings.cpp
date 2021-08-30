class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        char S[256]={0};
        char T[256]={0};
        for(int i=0; i<s.size(); i++)
        {
            if(S[s[i]]==0 && T[t[i]]==0)
            {
                S[s[i]]=t[i];
                T[t[i]]=s[i];
            }
            else if(S[s[i]]!=t[i] || T[t[i]!=s[i]])
                return false;
        }
        return true;
    }
};