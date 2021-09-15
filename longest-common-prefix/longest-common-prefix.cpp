class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n=str.size();
        int i=0;
        string ans="";
        sort(str.begin(), str.end());
        while(i<str[0].size() && str[n-1].size())
        {
            if(str[0][i]==str[n-1][i])
            {
                ans+=str[0][i]; 
                i++;
            }
                
            else
            {
                return ans;
            }
        }
        return ans;
    }
};