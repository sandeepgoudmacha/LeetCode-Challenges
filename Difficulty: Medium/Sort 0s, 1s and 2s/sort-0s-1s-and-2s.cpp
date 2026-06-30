class Solution {
  public:
  void mergesort( vector<int>& arr, int l, int mid, int r){
      vector<int> temp;
      int left=l, right=mid+1;
      while(left<=mid && right<=r){
          if(arr[left]<=arr[right]){
              temp.push_back(arr[left++]);
          }
          else{
              temp.push_back(arr[right++]);
          }
      }
      while(left<=mid){
          temp.push_back(arr[left++]);
      }
       while(right<=r){
          temp.push_back(arr[right++]);
      }
      for(int i=l;i<=r;i++){
          arr[i]=temp[i-l];
      }
  }
  
   void merge(vector<int>& v, int l, int r){
       if(l<r){
           int mid = (l+r)/2;
           merge(v, l, mid);
           merge(v, mid+1, r);
           mergesort(v, l, mid, r);
       }
   }
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        merge(arr,0,n-1);
    }
};