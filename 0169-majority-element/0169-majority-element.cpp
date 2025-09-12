class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>m;
      int n=nums.size();
      for(auto x:nums) {
        m[x]++;
        if(m[x]>n/2) return x;
      }
return -1;
    }
};