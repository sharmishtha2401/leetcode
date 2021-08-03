class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        int i=1;
        while(i<n)
        {
            if(check_zero(i) && check_zero(n-i))
            {
                ans.push_back(i);
                ans.push_back(n-i);
                break;
            }
            i++;
        }
        return ans;
    }
    
    bool check_zero(int x)
    {
        while(x>0)
        {
            if(x%10==0)
                return false;
            x/=10;
        }
        return true;
    }
};