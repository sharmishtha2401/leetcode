class Solution {
public:
    string sortString(string s) {
        vector<int> alpha(26,0);
        for(int i=0; i<s.size(); i++)
        {
            alpha[s[i]-'a']++;
        }
        string ans="";
        while(ans.size()!=s.size())
        {
            for(int i=0; i<26; i++)
            {
                if(alpha[i]>0)
                {
                    ans+='a'+i;
                    alpha[i]--;
                }
            }
            
            for(int i=25; i>=0; i--)
            {
               if(alpha[i]>0)
                {
                    ans+='a'+i;
                    alpha[i]--;
                } 
            }
        }
        return ans;
        
    }
};