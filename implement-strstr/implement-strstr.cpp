class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        int h=haystack.size(), n=needle.size();
        for(int i=0; i<h; i++)
        {
            int j;
            if(haystack[i]==needle[0])
            {
                for(j=0; j<n; j++)
                {
                    if(haystack[i+j]!=needle[j])
                        break;
                }
            }
            if(j==n)
                return i;
        }
        return -1;
    }
};