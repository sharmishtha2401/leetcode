class Solution {
public:
    int minAddToMakeValid(string s) {
        int right=0, left=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                right++;
            else if(right>0)
                right--;
            else
                left++;
        }
        return left+right;
        
    }
};