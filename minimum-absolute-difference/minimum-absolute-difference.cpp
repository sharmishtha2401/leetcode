class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int min=INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size()-1; i++)
        {
            int diff=arr[i+1]-arr[i];
            if(diff<min)
            {
                min=diff;
                ans.clear();
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(diff==min)
            {
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};