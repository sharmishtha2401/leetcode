class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int i = 0, N = s.size(), ans = 0;
        while (i < N) 
        {
            int j = i, sum = 0, mx = 1;
            for (; i < N && s[i] == s[j]; ++i) 
            {
                sum += cost[i]; 
                mx = max(mx, cost[i]);
            }
            ans += sum - mx;
        }
        return ans;
    }
};