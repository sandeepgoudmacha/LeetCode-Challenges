class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int x1=0, x2=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            x1^=arr[i];
        }
        for(int i=1;i<=n+1;i++){
            x2^=i;
        }
        return x1^x2;
    }
};