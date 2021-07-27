class Solution {
public:
    bool areOccurrencesEqual(string s) {
        if(s.size()==0)
            return true;
        vector<int> alpha(26,0);
        for(int i=0; i<s.size(); i++)
        {
            alpha[s[i]-'a']++;
        }
        int a;
        int flag=0;
        for(int i=0; i<26; i++)
        {
            if(flag==0 && alpha[i]!=0)
            {
                a=alpha[i];
                flag=1;
            }
            if(alpha[i]!=a && alpha[i]!=0)
            {
                return false;
            }
        }
        return true;
        
        
    }
};