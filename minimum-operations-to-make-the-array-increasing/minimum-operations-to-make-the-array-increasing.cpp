class Solution {
public:
    int minOperations(vector<int>& arr) {
        int count=0;
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i]<=arr[i-1])
            {
                int k=arr[i];
                arr[i]=arr[i-1]+1;
                count+=arr[i]-k;
            }
        }
        return count;
        
    }
};