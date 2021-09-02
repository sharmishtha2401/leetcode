class Solution {
public:
    vector<int> distributeCandies(int candy, int num) {
        vector<int> ans(num);
        for(int i=0; candy>0; i++)
        {
            ans[i%num]+=min(i+1, candy);
            candy-=i+1;
        }
        return ans;
    }
};