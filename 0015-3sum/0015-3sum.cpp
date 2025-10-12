class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>v;
        set<vector<int>>s;
        for(int i=0;i<n;i++) {
            int l=i+1, r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                   vector<int>res={nums[i], nums[l], nums[r]};
                   s.insert(res);
                   l++;r--;
                }
                else if(sum>0){
                    r--;
                }
                else l++;
            }
        }
        for(auto x:s){
            v.push_back(x);
        }
        return v;
    }
};