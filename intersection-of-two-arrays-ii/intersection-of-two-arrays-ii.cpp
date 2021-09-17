class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0; i<nums1.size(); i++)
        {
            auto k=find(nums2.begin(), nums2.end(), nums1[i]);
            if(k==nums2.end())
                continue;
                    
            nums2[k-nums2.begin()]=-1;
            res.push_back(nums1[i]);
        }
        return res;
    }
};