class Solution {
public:
    string replaceDigits(string s) {
    for(int i=0; i<s.size();i++)
    {
        if(i%2==1)
        {
            
            char c=s[i-1]+s[i]-'0';
            s[i]=c;
            i++;
        }
    }
    return s;
    }
};