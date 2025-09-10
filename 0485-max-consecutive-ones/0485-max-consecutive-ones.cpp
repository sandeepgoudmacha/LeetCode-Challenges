class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        int maxi=0,c=0;
        while(j<n){
            if(nums[j]==1) {
                j++;
                c++;
            }
            else{
               
                c=0;
                j++;
                i=j;
            }
             maxi=max(c,maxi);
        }
        return maxi;
    }
};