class Solution {
public:
    int countVowelSubstrings(string word) {
        set<char> s;
        int cnt=0;
        int n=word.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(!vowel(word[j]))
                    break;
                s.insert(word[j]);
                if(s.size()==5)
                    cnt++;             
            }
            s.clear();
        }
        return cnt;
    }
    
    bool vowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return true;
        return false;
    }
};