class Solution {
public:
    char slowestKey(vector<int>& rel, string key) {
        vector<int> alpha(26, 0);
        for(int i=0; i<key.size(); i++)
        {
            if(i==0)
            {
                alpha[key[i]-'a']+=rel[i];
            }
            else
            {
                alpha[key[i]-'a']=max(alpha[key[i]-'a'], rel[i]-rel[i-1]);
            }
        }
        int max=alpha[25];
        char ans='z';
        for(int i=24; i>=0; i--)
        {
            if(alpha[i]>max)
            {
                max=alpha[i];
                ans='a'+i;
            }
        }
        return ans;
    }
};