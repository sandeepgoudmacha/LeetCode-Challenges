class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
         int n=nums.size();
         long long s=0;
        for(int i=0;i<n;i++) s+=nums[i];
        if(target%s==0) return (target/s)*n;
        int f=0;
        if(target>s){
            f=target/s;
            target=target % s;
        }
        unordered_map<long long,int> m;
        long long sum=0;
        int r=INT_MAX;
        m[0]=-1;
        for(int i=0;i<2*n;i++){
            sum += nums[i%n];
            long long d=sum-target;
            if(m.count(d)) r=min(r,f*n+i-m[d]);
            if(!m.count(sum)) m[sum] = i;
            // cout<<sum<<endl;
        }
        return r==INT_MAX ? -1:r;
    }
};