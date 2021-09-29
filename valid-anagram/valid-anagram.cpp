class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alpha(26, 0);
        //vector<int> beta(26, 0);
        for(int i=0; i<s.size(); i++)
        {
            alpha[s[i]-'a']++;
        }
        for(int i=0; i<t.size(); i++)
        {
            alpha[t[i]-'a']--;
            
        }
        for(int i=0; i<26; i++)
        {
            if(alpha[i]!=0)
                return false;
        }
        return true;
        
    }
};