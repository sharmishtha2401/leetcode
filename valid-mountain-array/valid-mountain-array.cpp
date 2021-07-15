class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int max=*max_element(arr.begin(), arr.end());
        if(arr[arr.size()-1]==max || arr[0]==max )
            return false;
        int i;
        for(i=0; arr[i]!=max; i++)
        {
            if(arr[i]>=arr[i+1])
                return false;
        }
        i++;
        for(i; i<arr.size(); i++)
        {
            if(arr[i]>=arr[i-1])
                return false;
        }
        return true;
    }
};