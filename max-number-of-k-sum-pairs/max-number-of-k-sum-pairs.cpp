class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); i++)
        {
            int tofind=k-nums[i];
            if(hash[tofind]>0)
            {
                count++;
                hash[tofind]--;
            }
            else
            {
                hash[nums[i]]++;
            }
        }
        return count;
    }
};