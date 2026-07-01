class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        int sum=0, maxi=INT_MIN;
        int st=0, beg=-1, end=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                st=i+1;
                sum=0;
                continue;
            } 
            sum+=arr[i];
            
            if(sum>maxi || (sum==maxi && i-st>end-beg)){
                maxi=sum;
                beg=st;
                end=i;
            }
        
        }
        if(beg==-1) return {-1};
       return vector<int>(arr.begin()+beg, arr.begin()+end+1);
    }
};