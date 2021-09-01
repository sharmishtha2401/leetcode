class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int m=0;
        for(int i=0; i<nums.size(); i++)
        {
            int s=0;
            for(int j=i; nums[j]>=0; s++)
            {
                int next=nums[j];
                nums[j]=-1;
                j=next;
            }
            m=max(m,s);
        }
        return m;
    }
};