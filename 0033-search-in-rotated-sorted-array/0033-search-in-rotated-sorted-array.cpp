class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l=0,r=nums.size()-1;
       int g=0;
       if(nums[0]>target) g=1;
       while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]==target) return mid;
        else if(nums[l]<=nums[mid]){
            if(nums[mid]>target && target>=nums[l]) r=mid-1;
            else l=mid+1;
        }
        else{
            if(nums[mid]<target && target<=nums[r]){
                l=mid+1;
            }
            else r=mid-1;
        }
       }
        return -1;
    }
};