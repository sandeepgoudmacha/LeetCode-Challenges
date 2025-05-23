class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v(2,-1);
        int i=-1,j=-1;
        i=find(nums.begin(),nums.end(),target)-nums.begin();
        if(i == nums.size() || nums[i]!=target) return v;
        j=nums.rend() -find(nums.rbegin(),nums.rend(),target)-1;
        v[0]=i;
        v[1]=j;
        return v;
    }
};