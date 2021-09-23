class Solution {
public:
    string breakPalindrome(string p) {
        if(p.size()==1)
            return "";
        int flag=0;
        string res="";
        for(int i=0; i<p.size(); i++)
        {
            if(p[i]!='a' && i!=p.size()/2)
            {
                p[i]='a';
                return p;
            }
            else if(i==p.size()-1)
            {
                p[i]='b';
                return p;
            }
        }
        return p;
        
    }
};