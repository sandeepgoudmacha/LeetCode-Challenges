class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
       int n=arr.size();
       int i=0;
       for(int j=1;j<n;j++){
           if(arr[i]==0 && arr[j]!=0){
               swap(arr[i], arr[j]);
               
           }
           else if(arr[i]==0 && arr[j]==0){
               continue;
           }
           i++;
       }
    }
};