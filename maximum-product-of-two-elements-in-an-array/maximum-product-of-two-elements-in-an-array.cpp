class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int firstmax = pq.top();
        pq.pop();
        int secondmax = pq.top();
        return (firstmax - 1) * (secondmax- 1);
    }
};