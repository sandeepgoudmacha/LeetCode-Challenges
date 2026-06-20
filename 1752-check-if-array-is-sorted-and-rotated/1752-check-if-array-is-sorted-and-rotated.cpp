class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int d=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                d++;
            }
        }
        if(nums[n-1]>nums[0]) d++;
        return d<=1;
    }
};