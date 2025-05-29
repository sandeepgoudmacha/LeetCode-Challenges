class Solution {
public:
    vector<vector<int>> findSubsets(vector<vector<int>>&v,vector<int>&nums,vector<int>t,int i){
        // if(v.size()==pow(2,nums.size()) ) return v;
        if(i==nums.size()) {
            v.push_back(t);
            return v;
        }
        t.push_back(nums[i]);
        // v.push_back(t);
        findSubsets(v,nums,t,i+1);
        t.pop_back();
        return findSubsets(v,nums,t,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>t;
        v=findSubsets(v,nums,t,0);
        // v.push_back({});
        return v;
    }
};