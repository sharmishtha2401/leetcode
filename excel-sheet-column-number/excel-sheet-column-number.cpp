class Solution {
public:
    int titleToNumber(string str) {
        int ans=0;
        long long int ptr=1;
        for(int i=str.size()-1; i>=0; i--)
        {
            ans+=ptr*(str[i]-'A'+1);
            ptr*=26;
        }
        return ans;
    }
};