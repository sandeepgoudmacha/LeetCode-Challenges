class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,c=0;
        int n=nums.size();
        int j=(n+1)/2;
        vector<int>v(n,0);
        while(i<(n+1)/2 && j<n){
                if(2*nums[i]<=nums[j]){
                    c+=2;
                    // if(i<j-1){
                    //     j--;
                    // }
                    i++;j++;
                } 
                else{
                    // j=nums.size()-1;
                    // i++;
                    j++;
                }
        }
        return c;
    }
};