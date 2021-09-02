class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans(s.size(), -1);
        int k=-1;
        for(int i=0; i<s.size(); i++)
        {
            if(k==-1 && s[i]!=c)
                continue;
            else if(s[i]==c)
            {
                k=0;
                ans[i]=k;
            }
            else
            {
                ans[i]=k;
            }
            k++;
        }
        
        k=-1;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(k==-1 && s[i]!=c)
                continue;
            else if(s[i]==c)
            {
                k=0;
                ans[i]=k;
            }
            else
            {
                if(ans[i]==-1)
                    ans[i]=k;
                else      
                    ans[i]=min(k, ans[i]);
            }
            k++;
        }
        
        
        return ans;
    }
};