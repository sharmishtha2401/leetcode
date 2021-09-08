class Solution {
public:
    int secondHighest(string s) {
        int max=-1, sec=-1;
        for(int i=0; i<s.length(); i++)
        {
            if(isdigit(s[i])==false)
            {
                continue;
            }
            int n=s[i]-'0';
            if(n>max)
            {
                
                sec=max;
                max=n;
            }
            else if(n!=max && n>sec)
            {
                sec=n;
            }
        }
        return sec;
        
    }
};