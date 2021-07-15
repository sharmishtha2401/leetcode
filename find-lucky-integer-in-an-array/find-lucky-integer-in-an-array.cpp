class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int count=1;
        for(int i=arr.size()-2; i>=0; i--)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
            }
            else
            {
                if(count==arr[i+1])
                    return count;
                count=1;
            }
        }
        return count==arr[0]?count:-1;
    }
};