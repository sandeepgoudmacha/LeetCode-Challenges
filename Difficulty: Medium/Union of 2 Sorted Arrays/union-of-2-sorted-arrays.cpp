class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1=a.size();
        int n2=b.size();
        int left=0, right=0;
        vector<int>res;
        while(left<n1 && right<n2){
            if(!res.empty() && res.back() == a[left]){
               left++;
               continue;
            } 
            if(!res.empty() && res.back() == b[right]){
               right++;
               continue;
            } 
            if(a[left] == b[right]) {
                res.push_back(a[left++]);
                right++;
            }
            else if(a[left]<b[right]) res.push_back(a[left++]);
            else res.push_back(b[right++]);
        }
        while(left<n1){
            if(res.back() == a[left]){
               left++;
               continue;
            } 
            res.push_back(a[left++]);
        } 
        while(right<n2) {
             if(res.back() == b[right]){
               right++;
               continue;
            } 
            res.push_back(b[right++]);
        }
        return res;
    }
};