class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,r=0;
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int>v(maxi+1,0);
        int maxL=0,maxSum=0;
        while(l<=r && r<n){
            while(v[nums[r]]>0){
                
                v[nums[l]]--;
                maxL-=nums[l];
                l++;
            }
            
            v[nums[r]]++;
            maxL+=nums[r];
            maxSum = max(maxSum, maxL);
            r++;
            
            
        }
        // int sum=0;
        // for(int i=0;i<v.size();i++){
        //     if(v[i]) sum+=i;
        // }
        return maxSum;
    }
};