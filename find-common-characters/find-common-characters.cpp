class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> alpha(26,0);
        vector<int> check(26,0);
        
        for(int i=0; i<words[0].size(); i++)
        {
            alpha[words[0][i]-'a']++;
        }
        
        for(int i=1; i<words.size(); i++)
        {
            for(int j=0; j<words[i].size(); j++)
            {
                check[words[i][j]-'a']++;
            }
            
            for(int i=0; i<26; i++)
            {
                alpha[i]=min(alpha[i], check[i]);
                check[i]=0;
            }
        }
        
        vector<string> res;
        for(int i=0; i<26; i++)
        {
            int c=alpha[i];
            while(c--)
            {
                char a=i+'a';
                string s;
                s=a;
                res.push_back(s);
            }
        }
        return res;
        
    }
};