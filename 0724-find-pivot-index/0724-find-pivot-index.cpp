class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixSum(n,0);
        vector<int>suffixSum(n,0);
        prefixSum[0]=0;
        suffixSum[n-1]=0;
        int j=n-2;
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i-1];
            suffixSum[j]=suffixSum[j+1]+nums[j+1];
            if(j>0) j--;

        }
        for(int i=0;i<n;i++) {
            cout<<prefixSum[i]<<" "<<suffixSum[i]<<endl;
            if(prefixSum[i]==suffixSum[i]) return i;
        }
        return -1;
        
    }
};