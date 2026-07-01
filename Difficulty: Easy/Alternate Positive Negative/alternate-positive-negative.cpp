class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++){
            if(arr[i]>=0) v1.push_back(arr[i]);
            else v2.push_back(arr[i]);
        }
        int a=0, b=0, i=0;
        while(a<v1.size() && b<v2.size()){
            arr[i++]=v1[a++];
            arr[i++]=v2[b++];
        }
        while(a<v1.size()) arr[i++]=v1[a++];
        while(b<v2.size()) arr[i++]=v2[b++];
    }
};