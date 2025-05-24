class Solution {
public:
    int divisor(vector<int>&v,int t){
        int s=0;
        for(int i=0;i<(int)v.size();i++){
            s+=ceil((double)v[i]/(double)t);
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int l=1,r=*max_element(nums.begin(),nums.end());
        while(l<=r){
            int mid=(l+r)/2;
            int sum=divisor(nums,mid);
            if(sum<=threshold) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};