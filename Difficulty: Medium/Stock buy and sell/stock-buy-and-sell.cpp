class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        // code here
        int n=arr.size();
      
        int total=0;
        if(n<=1) return 0;
        for(int i=1;i<n;i++){
           if(arr[i]>arr[i-1]){
               total+=(arr[i]-arr[i-1]);
           }
        }
        return total;
    }
};