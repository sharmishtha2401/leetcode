class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<4) return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                for(int j=i+1;j<n-2;j++){
                    if(j==i+1 || nums[j]!=nums[j-1]){
                        int l=j+1,r=n-1;
                        while(l<r){
                            int sum=nums[i]+nums[j]+nums[l]+nums[r];
                            if(sum==target){
                                ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                                while(l<r && nums[l]==nums[l+1]) l++;
                                while(l<r && nums[r]==nums[r-1]) r--;
                                l++;r--;
                            }else if(sum<target) l++;
                            else r--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};