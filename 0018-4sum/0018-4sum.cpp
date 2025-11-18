class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>>s;
        vector<vector<int>>v;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1, r=n-1;
                // if(nums[i]==nums[j]) continue;
                while(l<r){
                    // if(nums[j]==nums[l] || nums[j]==nums[r] || nums[l]==nums[r]) continue;
                    long long sum=(long long)nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target){
                        vector<int>res={nums[i], nums[j], nums[l], nums[r]};
                        s.insert(res);
                        while(l<r && nums[l]==nums[l+1]) l++;
                        while(l<r && nums[r]==nums[r-1]) r--;
                        l++;
                        r--;
                    }
                    else if(sum>target) r--;
                    else l++;
                }
            }
        }
        for(auto x:s){
            v.push_back(x);
        }
        return v;
    }
};