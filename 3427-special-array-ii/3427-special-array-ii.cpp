class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>p(n,1);
        for(int i=1;i<n;i++){
            if((nums[i]&1)==(nums[i-1]&1)){ 
                p[i]=1;
            }
            else{
                p[i]=1+p[i-1];
            }
        }
        vector<bool>ans;
        for(auto it:queries){
            int l=it[0];
            int r=it[1];
            int size=r-l+1; 
            if(p[r]>=size){ 
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;

    }
};