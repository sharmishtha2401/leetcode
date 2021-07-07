class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    vector<bool> res;
    for (int i = 0; i < l.size(); ++i) {
        if (r[i] - l[i] < 2)
            res.push_back(true);
        else {
            vector<int> n(nums.begin()+l[i], nums.begin()+r[i]+1);
            int j;
            sort(begin(n), end(n));
            for (j=2; j < n.size(); ++j)
                if (n[j] - n[j - 1] != n[1] - n[0])
                    break;
            res.push_back(j == n.size());
        }
    }
    return res;
}
};