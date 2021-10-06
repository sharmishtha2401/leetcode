class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        vector<string> ans;
        string str="";
        bool check=false;
        for(int i=0; i<source.size(); i++)
        {
            for(int j=0; j<source[i].size(); j++)
            {
                if(!check && j+1<source[i].size() && source[i][j]=='/' && source[i][j+1]=='/')
                    break;
                else if(!check && j+1<source[i].size() && source[i][j]=='/' && source[i][j+1]=='*')
                {
                    check=true;
                    j++;
                }
                else if(check && j+1<source[i].size() && source[i][j]=='*' && source[i][j+1]=='/')
                {
                    check=false;
                    j++;
                }
                else if(!check)
                    str+=source[i][j];
                
            }
            if(!check && str.size()!=0)
            {
                ans.push_back(str);
                str="";
            } 
        }       
        return ans;
    }
};