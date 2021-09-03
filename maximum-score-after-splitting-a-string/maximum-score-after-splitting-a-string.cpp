class Solution {
public:
    int maxScore(string s) {
        int m=0;
        int zero=0, one=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                one++;
        }
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one--;
            m=max(m, zero+one);
        }
        return m;
        
    }
};