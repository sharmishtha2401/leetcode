class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> start, end, degree;
        int d=INT_MIN; 
        int ans=nums.size();
        for(int i=0; i<nums.size(); i++)
        {
            int x=nums[i];
            if(start[x]==0)
            {
                start[x]=i+1;
            }
            
            end[x]=i+1;
            
                
            
            degree[x]++;
            
            d=max(d, degree[x]);
            
        }
        
        for(auto m : degree)
        {
            if(m.second==d)
            {
                ans=min(ans, end[m.first]-start[m.first]+1);
            }
        }
        return ans;
    }
};