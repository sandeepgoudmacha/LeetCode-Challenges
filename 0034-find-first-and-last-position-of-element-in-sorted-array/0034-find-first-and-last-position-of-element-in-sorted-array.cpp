class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        int i=-1,j=-1;
        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]>=target){
                i=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(i==-1 ||i>=n ||nums[i]!=target) i=-1;
        l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]<=target){
                j=mid;
                l=mid+1;
            }
            else{
               r=mid-1;
            }
        }
        if(j==-1 ||j<0||nums[j]!=target ) j=-1;
        v.push_back(i);v.push_back(j);
        return v;
    }
};