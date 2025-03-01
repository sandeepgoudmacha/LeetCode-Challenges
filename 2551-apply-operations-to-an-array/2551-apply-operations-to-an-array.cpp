class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        // int a[n];
        vector<int>a;
        int c=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
                // c++;
            }
        }
       for(int i=0;i<n;i++){
        if(nums[i]!=0) a.push_back(nums[i]);
        if(nums[i] ==0) c++;
       }
       for(int i=0;i<c;i++) a.push_back(0);
        return a;
    }
};