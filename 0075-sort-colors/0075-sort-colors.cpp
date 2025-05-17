class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size()-1;
       int left=0,mid=0,high=n;
       while(mid<=high){
        if(nums[mid]==0) swap(nums[left++],nums[mid++]);
        else if(nums[mid]==1) mid++;
        else swap(nums[mid],nums[high--]);
       }
    }
};