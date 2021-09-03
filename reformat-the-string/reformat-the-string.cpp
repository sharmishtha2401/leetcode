class Solution {
public:
    string reformat(string s) {
        int dig=0, alpha=0;
        string d="";
        string a="";
        for(int i=0; i<s.size(); i++)
        {
            if(isdigit(s[i]))
            {
                dig++; d+=s[i];
            }
            else
            {
                alpha++; a+=s[i];
            }
                
        }
        if(abs(dig-alpha)>1)
            return "";
        
        string ans="";
        
        bool big=dig>alpha;
        int i=0, j=0, k=0;
        while(i<s.size())
        {
            if(big)
            {
                ans+=d[j++];
            }
            else
            {
                ans+=a[k++];
            }
            big=!big;
            i++;
        }
        return ans;
        
    }
};