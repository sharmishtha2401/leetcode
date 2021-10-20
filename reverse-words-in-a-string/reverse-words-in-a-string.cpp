class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i,j;
        vector<string> words;
        string word="";
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]==' ' && i==0) || s[i]==' ' && s[i-1]==' ')
                continue;
            if(i==s.size()-1)
            {
                word+=s[i];
                words.push_back(word);
            }
            
            else if(s[i]==' ')
            {
                words.push_back(word);
                word="";
            }
            else
            {
                word+=s[i];
            }
        }
        
        for(int i=words.size()-1; i>=0; i--)
        {
            ans+=words[i];
            ans+=' ';
        }
        ans.pop_back();
        return ans;
        
        
    }
};