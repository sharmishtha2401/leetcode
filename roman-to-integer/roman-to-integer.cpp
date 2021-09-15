class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        int len=s.size();
        for(int i=0; i<len; i++)
        {
            if(i<len-1 && roman(s[i])<roman(s[i+1]))
            {
                n-=roman(s[i]);
            }         
            else
            {
                n+=roman(s[i]);
            }    
        }
        return n;
    }
    
    int roman(char a)
        {
            switch(a)
            {
                case 'I':
                    return 1;
                case 'V':
                    return 5;
                case 'X':
                    return 10;
                case 'L':
                    return 50;
                case 'C':
                    return 100;
                case 'D':
                    return 500;
                case 'M':
                    return 1000;
                default:
                    return 0;
            }
        } 
};