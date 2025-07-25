class Solution {
public:
    int maxSum(vector<int>& nums) {
        map<int,int>m;
        int sum=0;
        int mini=INT_MIN;
        for(auto x:nums){
            m[x]++;
            if(m[x]==1 && x>0) sum+=x;
            if(x<=0) mini=max(mini,x);
        }
        if(sum==0 && mini!=INT_MAX){
            return mini;
        }
        return sum;
    }
};