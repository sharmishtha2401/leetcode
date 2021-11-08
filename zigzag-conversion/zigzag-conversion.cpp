class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        
        int cur=0;
        bool flag=true;
        vector<string> rows(numRows);
        for(int i=0; i<s.size(); i++)
        {
            rows[cur]+=s[i];
            
            if(cur==0)
                flag=true;
            if(cur==numRows-1)
                flag=false;
            
            if(flag)
                cur++;
            else
                cur--;
        }
        
        string ans="";
        for(int i=0; i<numRows; i++)
        {
            ans+=rows[i];
        }
        return ans;
    }
};