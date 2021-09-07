class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        if(n<1)
            return false;
        string check;
        for(int i=1; i<=n/2; i++)
        {
            if(n%i==0)
            {
                check=trial(s, i);
                if(check==s)
                    return true;
            }
        }
        return false;   
    }
    
    string trial(string &s, int i)
        {
            string ans=s.substr(i);
            ans+=s.substr(0,i);
            return ans;
        }
};