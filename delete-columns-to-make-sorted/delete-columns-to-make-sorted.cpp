class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int count=0;
        for(int i=0; i<s[0].size(); i++)
        {
            for(int j=1; j<s.size(); j++)
            {
                if(s[j-1][i]>s[j][i])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};