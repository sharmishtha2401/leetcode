class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;
        int n1=nums1.size();
        int n2=nums2.size();
        int p=0, q=0;
        while(p<n1 && q<n2)
        {
            if(nums1[p]==nums2[q])
            {
                res.push_back(nums1[p]);
                p++;
                q++;
            }
            else if(nums1[p]>nums2[q])
                q++;
            else
                p++;
            while(p>0 && p<n1 && nums1[p]==nums1[p-1])p++;
            while(q>0 && q<n2 && nums2[q]==nums2[q-1])q++;
        }
        return res;
    }
};