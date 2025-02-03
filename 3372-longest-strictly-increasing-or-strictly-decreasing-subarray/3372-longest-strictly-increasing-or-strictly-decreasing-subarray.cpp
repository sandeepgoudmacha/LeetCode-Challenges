class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if((int)nums.size()==1) return 1;
        int c=1,c1=1;
        int maxi=1;
        for(int i=0;i<(int)nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                c++;
                maxi=max(maxi,c);
            }
            else c=1;
        }
        int maxii=1;
        for(int i=0;i<(int)nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                c1++;
                maxii=max(maxii,c1);
            }
            else c1=1;
        }
        return (int)max(maxi,maxii);
    }
};