class Solution {
public:
    bool isSumEqual(string word1, string word2, string target) {
        vector<int> alpha(26);
        for(int i=0; i<26; i++)
        {
            alpha[i]=i;
        }
        
        int a=0, b=0, c=0;
        for(int i=0; i<word1.size(); i++)
        {
            a=a*10+alpha[word1[i]-'a'];
        }
        
        for(int i=0; i<word2.size(); i++)
        {
            b=b*10+alpha[word2[i]-'a'];
        }
        
        for(int i=0; i<target.size(); i++)
        {
            c=c*10+alpha[target[i]-'a'];
        }
        
        if(a+b==c)
            return true;
        return false;
    }
};