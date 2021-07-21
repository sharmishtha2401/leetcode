class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int k=0;
        for(int i=1; i<=n; i++)
        {
            if(i==target[k])
            {
                ans.push_back("Push");
                k++;
                if(k==target.size())
                    break;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};