class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        for(int i=0;i<(int)arr.size();i++){
            if(arr[i] == x) return i;
        }
        return -1;
    }
};