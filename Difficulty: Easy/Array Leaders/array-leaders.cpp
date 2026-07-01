class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int maxi=0;
        int n=arr.size();
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxi){
                v.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};