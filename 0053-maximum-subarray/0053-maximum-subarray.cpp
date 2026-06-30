class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prefixSum=0;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
            maxi=max(prefixSum, maxi);
            if(prefixSum<0) prefixSum=0;
        }
        return maxi;
    }
};