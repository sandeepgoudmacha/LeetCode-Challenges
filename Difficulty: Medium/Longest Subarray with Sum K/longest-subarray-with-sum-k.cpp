class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>m;
        int prefixSum=0;
        int res=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            prefixSum+=arr[i];
            if(prefixSum == k){
                res=i+1;
            }
            else if(m.find(prefixSum-k) != m.end()){
                res=max(res, i-m[prefixSum-k]);
            }
            if(m.find(prefixSum) == m.end()){
                m[prefixSum] = i;
            }
        }
        return res;
    }
};