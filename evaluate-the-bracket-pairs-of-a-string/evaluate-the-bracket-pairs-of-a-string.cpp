class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> hash;
        for(auto key : knowledge)
        {
            hash[key[0]]=key[1];
        }
        string ans="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                i++;
                string word="";
                while(i<s.size() && s[i]!=')')
                {
                    word+=s[i];
                    i++;
                }
                    
                ans+= hash.count(word) ? hash[word] : "?";
            }
            else
                ans+=s[i];
        }
        return ans;
    }
};