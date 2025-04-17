class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        map<int,int>m;
        int l=0,r=0;
        int maxi=0;
        int c=k;
        vector<int>v=nums;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                // m[nums[i]]++;
                maxi=max(r-l+1,maxi);
                r++;
            }
            else{
                if(m[nums[i]]<k){
                    m[nums[i]]++;
                    nums[i]=1 ;  
                     maxi=max(r-l+1,maxi);
                    r++;
                    // c--;
                }
                else{
                   
                   if(v[l]==0){
                    m[v[l]]--;
                    // l++;
                   }
                   l++;
                   i--;
                }
            }
        }
        return maxi;
    }
};