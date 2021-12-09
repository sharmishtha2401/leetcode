class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size(), false);
        return check(arr, visited, start);
    }
    
    bool check(vector<int>& arr, vector<bool>& visited, int i)
    {
        if(i<0 || i>=arr.size() || visited[i])
            return false;
        if(arr[i]==0)
            return true;
        visited[i]=true;
        return check(arr, visited, i+arr[i]) || check(arr, visited, i-arr[i]);
    }
};