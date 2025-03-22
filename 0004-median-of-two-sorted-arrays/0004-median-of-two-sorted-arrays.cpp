class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int a=nums1.size();
        int b=nums2.size();
        for(int i=0;i<(int)nums1.size();i++){
            v.push_back(nums1[i]);
        }
        for(int i=0;i<(int)nums2.size();i++){
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        if((a+b)%2==0)
           return (v[(n-1)/2]+v[(n+1)/2])/2.0;
        else 
           return v[n/2];
        return 0;
    }
};