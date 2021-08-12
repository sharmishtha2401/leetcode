class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int k=0;
        for(int i=0; i<t.size(); i++)
        {
            if(t[i]==s[k])
            {
                k++;
                n--;
            }
            
        }
        if(n==0)
            return true;
        return false;
        
    }
};