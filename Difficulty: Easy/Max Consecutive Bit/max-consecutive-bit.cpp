class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int maxi=INT_MIN, n=arr.size();
        int j=0;
        int i=0;
        while(j<n){
            if(arr[i] == arr[j]){
                maxi =max(maxi, j-i+1);
                j++;
                // continue;
            }
            else{
               
                i=j;
                j++;
            }
            
        }
        return maxi;
    }
};