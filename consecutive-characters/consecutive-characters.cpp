class Solution {
public:
    int maxPower(string s) {
        if(s.size()==0)
            return 0;
        if(s.size()==2 && s[0]==s[1])
            return 2;
        s+='*';
        int count=1;
        int p=1;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==s[i-1])
                p++;
            else
            {
                count=max(p,count);
                p=1;
            }
                
        }
        return count;
        
    }
};