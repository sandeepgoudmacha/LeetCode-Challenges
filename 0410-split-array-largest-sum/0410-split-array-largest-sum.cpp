class Solution {
public:
    int sumOfSubArrays(vector<int>& v, int k, int mid, int&mini){
        int currentSum=v[0];
        // int maxi=INT_MIN;
        mini=INT_MAX;
        int noOfSubArrays=1;
        for(int i=1;i<(int)v.size();i++){
            if(currentSum+v[i]<=mid){
                currentSum+=v[i];
            }
            else{
                noOfSubArrays++;
                mini=max(mini,currentSum);
                currentSum=v[i];
                // mini=max(mini,currentSum);
            }
            
        }
        mini=max(mini,currentSum);
        // mini=maxi;
        return noOfSubArrays;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int l=*max_element(nums.begin(),nums.end()),r=accumulate(nums.begin(),nums.end(),0);
        //  mini=INT_MAX;
        int maxi=INT_MIN;
        while(l<=r){
            int mid=(l+r)/2;
           int mini=INT_MAX;
            int sum=sumOfSubArrays(nums, k, mid, mini);
            if(sum<=k){
                // maxi=max(mini,maxi);
                maxi=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return maxi;
    }
};