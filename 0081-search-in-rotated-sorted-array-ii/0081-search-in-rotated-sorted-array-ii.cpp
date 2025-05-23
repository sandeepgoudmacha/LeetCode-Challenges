class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            cout<<nums[mid]<<" "<<mid<<endl;
            if(nums[mid]==target){
                cout<<nums[mid]<<endl;
                return true;    
            } 
             if (nums[l]==nums[mid] && nums[mid]==nums[r]) {
                ++l;
                --r;
            }
            else if(nums[l]<=nums[mid]){
                if(target<nums[mid] && target>=nums[l]){
                    r=mid-1;
                }
                else l=mid+1;
                // if(nums[l]==target ||nums[r]==target) return true;
            }
            else{
                if(target<=nums[r] && target>nums[mid]){
                    l=mid+1;
                }
                else r=mid-1;
            }
        }
        return false;
    }
};