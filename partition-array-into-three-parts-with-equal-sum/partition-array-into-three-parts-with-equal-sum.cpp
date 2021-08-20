class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            sum+=arr[i];
        }
        cout<<sum<<endl;
        if(sum%3!=0)
            return false;
        int s1=0;
        int count=0;
        for(int i=0; i<arr.size(); i++)
        {
            s1+=arr[i];
            if(s1==sum/3)
            {
                count++;
                s1=0;
            }
        }
        return count>=3;
    }
};