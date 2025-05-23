class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int m=INT_MAX;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[l]<=nums[mid]){
                m=min(m,nums[l]);
                l=mid+1;
            }
            else{
                if(nums[mid]<=nums[r]){
                    l++;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return m;
    }
};