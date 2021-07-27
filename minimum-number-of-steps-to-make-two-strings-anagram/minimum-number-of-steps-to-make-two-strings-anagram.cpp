class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        vector<int> alpha(26, 0);
        for(int i=0; i<s.size(); i++)
        {
            alpha[s[i]-'a']++;
        }
        for(int i=0; i<t.size(); i++)
        {
            if(alpha[t[i]-'a']==0)
                count++;
            else
                alpha[t[i]-'a']--;
        }
        return count;
        
    }
};