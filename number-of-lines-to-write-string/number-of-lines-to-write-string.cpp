class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line=1;
        int count=0; 
        for(int i=0; i<s.size(); i++)
        {
            int w=widths[s[i]-'a'];
            if(count+w<=100)
            {
                count+=w;
            }
            else
            {
                count=w;
                line++;
            }
        }
        
        return {line, count};
        
    }
};