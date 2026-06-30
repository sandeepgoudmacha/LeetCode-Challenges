class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int prefixSum=0;
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            prefixSum+=arr[i];

            maxi=max(prefixSum, maxi);
            if(prefixSum<0){
                prefixSum = 0;
            }
        }
        return maxi;
    }
};