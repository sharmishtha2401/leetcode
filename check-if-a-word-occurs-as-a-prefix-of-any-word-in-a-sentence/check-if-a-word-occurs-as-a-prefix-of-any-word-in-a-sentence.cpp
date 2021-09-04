class Solution {
public:
    int isPrefixOfWord(string s, string w) {
        int n=0;
        
        for(int i=0; i<s.size(); i++)
        {
           if(i==0 || s[i-1]==' ')
           {
               n++;
               int k=0;
               while(s[i]==w[k])
               {
                   if(k==w.size()-1)
                       return n;
                   i++; k++;
               }
           }
        }
        return -1;
    }
};