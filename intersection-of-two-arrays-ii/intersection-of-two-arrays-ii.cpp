class Solution {   
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0; i<nums1.size(); i++)
        {
            auto k=find(nums2.begin(), nums2.end(), nums1[i]);       //find function time complexity: O(N)
            if(k==nums2.end())
                continue;
                    
            nums2[k-nums2.begin()]=-1;
            res.push_back(nums1[i]);
        }
        return res;
    }
};


OR

//O(max(n,m)Log(max(n,m))
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
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
        }
        return res;
    }
};
