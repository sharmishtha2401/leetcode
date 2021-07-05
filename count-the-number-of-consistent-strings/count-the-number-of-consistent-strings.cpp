class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> alpha(26,0);
        for(int i=0; i<allowed.size(); i++)
        {
            alpha[allowed[i]-'a']++;
        }
        int count=words.size();
        for(int i=0; i<words.size(); i++)
        {  
            for(int m=0; m<words[i].size(); m++)
            {
                if(alpha[words[i][m]-'a']==0)
                {
                    count--;
                    break;
                }
                
            }
        }
        return count;
    }
};