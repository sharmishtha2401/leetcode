class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(nums[i])!=s.end())           //O(N)
                return true;
            else
                s.insert(nums[i]);
        }
        return false;
    }
};



class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());            //O(N.logN)- because of sort
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1])
                return true;
        }
        return false;
    }
};




using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(), nums.end()).size();        
    }
}
