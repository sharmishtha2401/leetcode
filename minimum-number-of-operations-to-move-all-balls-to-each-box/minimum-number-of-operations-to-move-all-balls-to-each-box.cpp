class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int s=boxes.size();
        vector<int> ans(s);
        int last=0;
        int sum=boxes[0]-'0';
        for(int i=1; i<s; i++)
        {
            ans[i]+=last+sum;
            last=ans[i];
            sum+=(boxes[i]-'0');
        }
        
        last=0;
        sum=boxes[s-1]-'0';
        
        for(int i=s-2; i>=0; i--)
        {
            ans[i]+=last+sum;
            last=sum+last;
            sum+=(boxes[i]-'0');
        }
        return ans;
    }
};