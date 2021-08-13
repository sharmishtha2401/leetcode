class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int> d(n,0);  
        int k=0;
        for(int i=0; i<n; i++)
        {
            d[i]=arr[k++];
            if(d[i]==0)
            {
                i++;
            }
        }
        
        for(int i=0; i<d.size(); i++)
        {
            arr[i]=d[i];
        }
    }
};