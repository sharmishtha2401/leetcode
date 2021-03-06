class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());      
        int max=0;
        for(int i=0; i<nums.size()/2; i++)
        {
            int k=nums[i]+nums[nums.size()-i-1];
            if(k>max)
                max=k;
        }
        return max;
        
    }
};

OR

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> pair;
        sort(nums.begin(), nums.end());
        int n=nums.size()-1;
        int max=0;
        for(int i=0; i<nums.size()/2; i++)
        {
            int k=nums[i]+nums[n];
            if(k>max)
                max=k;
            pair.push_back(k);
            n--;
        }
        return max;
        
    }
};
