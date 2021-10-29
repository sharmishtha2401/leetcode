class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int s=n1+n2;
        int arr[s];
        int i=0;
        int j=0;
        int k=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
                arr[k++]=nums1[i++];
            
            else
                arr[k++]=nums2[j++];
        }
        
        while(i<n1)
        {
            arr[k++]=nums1[i++];
        }
        
        while(j<n2)
        {
             arr[k++]=nums2[j++];
        }
        
        if(s==1)
            return arr[0];
        int mid=s/2;
        double med=arr[mid];
        if(!(s%2))
        {
            med+=arr[mid-1];
            med/=2;
        }
        return med;
        
        
    }
};