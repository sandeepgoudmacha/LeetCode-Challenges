class Solution {
    public:
    int solve(vector<int>& nums, int target,int start)
    {
        map<int,int> mp;
        mp[0]=1;
        int pre=0;
        for(int i=start;i<nums.size();++i)
        {
            pre+=nums[i];
            if(mp.find(pre-target)!=mp.end())
                return 1+solve(nums,target,i+1);
            mp[pre]=i;
        }
        return 0;
    }

    int maxNonOverlapping(vector<int>& nums, int target) {
        int n = nums.size();
        return solve(nums,target,0);
    }
};