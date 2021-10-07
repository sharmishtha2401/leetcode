class Solution {
public:
    vector<string> printVertically(string s) {
        s+=" ";
        vector<string> v;
        string word;
        int max=0;
        for(int i=0; i<s.size(); i++)
        {
            if(!isalpha(s[i]))
            {
                if(word.size()>max)
                    max=word.size();
                
                v.push_back(word);
                word="";
            }
            else
            {
                word+=s[i];
            }
        }
        word="";
        vector<string> ans;
        for(int i=0; i<max; i++)
        {
            for(int j=0; j<v.size(); j++)
            {
                if(i>=v[j].size())
                {
                    word+=" ";
                }
                else
                {
                    word+=v[j][i];
                }
            }
            
            while(word.size() && word[word.size()-1]==' ')
            {
                word.pop_back();
            }
            ans.push_back(word);
            word="";
        }
        return ans;
    }
};