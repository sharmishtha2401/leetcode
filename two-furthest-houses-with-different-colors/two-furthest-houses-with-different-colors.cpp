class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int diff=0;
        for(int i=0; i<colors.size()-1; i++)
        {
            int now=colors[i];
            for(int j=colors.size()-1; j>i; j--)
            {
                if(colors[j]==now)
                    continue;
                else
                {
                    diff=max(diff, abs(j-i));
                    break;
                }
            }
        }
        return diff;
    }
};