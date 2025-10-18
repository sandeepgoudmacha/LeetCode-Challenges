class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        int n = nums.size();
        // map<int, int>m;
        int c=0;
        long long nxt=LLONG_MIN;
        sort(nums.begin(), nums.end());
        for(auto x: nums){
            // if(m.find(x)==m.end()){
            //     m[x]++;
            //     c++;
            // }
            int p=max((long long)x-k, nxt);
            if(p<=(long long)x+k){
                c++;
                nxt=p+1;
            }
            // else{
                // int val=-k;
                // int res=x+(val);
                // while(m.find(x+val)!=m.end() && val<=k){
                //     val++;
                // }
                // if(m.find(x+val)==m.end() && val<=k){
                //     m[x+val]++;
                //     c++;
                // }
            // }
        }
        // for(auto x:m){
        //     cout<<x.first<<" ";
        // } 
        return c; 
    }
};