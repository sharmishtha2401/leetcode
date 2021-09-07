class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> alpha(26,0);
        int n=words.size();
        for(int i=0; i<words.size(); i++)
        {
            for(int j=0; j<words[i].size(); j++)
            {
                alpha[words[i][j]-'a']++;
            }
        }
        for(int i=0; i<26; i++)
        {
            if(alpha[i]%n!=0)
                return false;
        }
        return true;
    }
};