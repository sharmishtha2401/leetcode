class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int count=0, min, group;
        vector<int> age(121,0);
        for(int i=0; i<ages.size(); i++)
        {
            age[ages[i]]++;
        }
        
        for(int i=1; i<121; i++)
        {
            age[i]+=age[i-1];
        }
        
        for(int i=15; i<121; i++)
        {
            min=(i/2)+7;
            group=age[i]-age[i-1];
            count+=group*(age[i]-age[min]-1);
        }
        return count;
    }
};