class Solution {
public:
    int canBeTypedWords(string text, string broke) {
        int count=0, check=0;
        vector<int> alpha(26,0);
        for(int i=0; i<broke.size(); i++)
            alpha[broke[i]-'a']++;
        for(int i=0; i<text.size(); i++)
        {
            if(text[i]==' ')
            {
                if(check==0)
                    count++;
                check=0;
            }
            else if(alpha[text[i]-'a']>0)
                check++;
            
        }
        if(check==0)
                    count++;
        return count;
        
    }
};