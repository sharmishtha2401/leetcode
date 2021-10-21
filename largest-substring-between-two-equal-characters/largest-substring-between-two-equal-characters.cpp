class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int res=-1;
        vector<int> alpha(26);
        for(int i=0; i<s.size(); i++)
        {
            if(alpha[s[i]-'a']==0)
                alpha[s[i]-'a']=i+1;
            else
                res=max(res, i-alpha[s[i]-'a']);
        }
        return res;
    }
};