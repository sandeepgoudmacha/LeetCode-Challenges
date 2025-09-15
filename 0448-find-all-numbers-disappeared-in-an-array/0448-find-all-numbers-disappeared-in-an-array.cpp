class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=1,n=nums.size(),j=0;
        vector<int>v;
        while(j<n){
            if(nums[j]==l){
                l++;
                // j++;
                // continue;
            }
            else if(nums[j]>l){ 
                // int i=j;
                while(l<nums[j]){
                    v.push_back(l);
                    l++;
                }
                l++;
            }
            j++;
        }
          while (l <= n) {
            v.push_back(l);
            l++;
        }
        return v;
    }
};