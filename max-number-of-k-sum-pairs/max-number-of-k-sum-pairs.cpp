//USING HASHMAP/Unordered map, O(N)
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

//Using Two pointer, O(N.logN), sort the array first
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count=0;
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
            {
                count++; 
                i++; 
                j--;
            }
            else if(nums[i]+nums[j]>k)
                j--;
            else
                i++;
        }
        return count;
    }
};
