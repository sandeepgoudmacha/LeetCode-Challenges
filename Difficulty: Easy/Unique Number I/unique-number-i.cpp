class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int x=0;
        for(auto i:arr){
            x^=i;
        }
        return x;
    }
};