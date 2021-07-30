class Solution {
public:
    int maxPower(string s) {
        if(s.size()==0)
            return 0;
        if(s.size()==2 && s[0]==s[1])
            return 2;
        s+='*';
        int count=1;
        int p=1;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==s[i-1])
                p++;
            else
            {
                count=max(p,count);
                p=1;
            }
                
        }
        return count;
        
    }
};


OR

class Solution {
public:
    int maxPower(string s) {
        // support variables
        int res = 0, i = 0, j, len = s.size(), curr = s[0];
        while (i < len) {
            // updating j
            j = i + 1;
            // moving j to the first value of s[j] != curr
            while (j < len && curr == s[j]) j++;
            // updating res
            res = max(res, j - i);
            // setting curr and i for the next loop
            curr = s[j];
            i = j;
        }
        return res;
    }
};
