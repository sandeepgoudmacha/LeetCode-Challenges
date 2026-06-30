class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        map<int,int>m;
        int n=arr.size();
        for(auto x: arr){
            m[x]++;
        }
        int maxi=0, res=-1, same=0;
        for(auto x:m){
          
           if(maxi<x.second){
               maxi=x.second;
               res=x.first;
           }
        }
        if(maxi>(n/2)) return res;
        return -1;
    }
};