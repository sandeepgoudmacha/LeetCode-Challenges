class Solution {
  public:
  bool finding(vector<int>& arr, int left, int right, int target){
      while(left<=right){
      int mid=(left+right)/2;
      if(arr[mid] == target) return 1;
      else if(arr[mid]>target){
          right=mid-1;
      }
      else{
          left=mid+1;
      }
      }
      return 0;
  }
  
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            int c=target-arr[i];
            if(finding(arr, i+1, n-1, c)) return 1;
        }
        return 0;
    }
};