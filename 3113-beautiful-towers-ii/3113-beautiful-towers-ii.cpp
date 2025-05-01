class Solution {
public:
    void height(vector<int>& nums, vector<long long>& sums) {
        int n = nums.size();
        stack<int> stk;
        for(int i=0;i<n;i++) {
            long long curr = nums[i];
            while(!stk.empty() and nums[stk.top()] > curr) {
                stk.pop();
            }
            if(!stk.empty())
                sums[i] = sums[stk.top()] + curr*(i-stk.top());
            else
                sums[i] = curr*(i+1);
            stk.push(i); 
        }
    }

    long long maximumSumOfHeights(vector<int>& nums) {
        int n = nums.size();
        vector<long long> left(n), right(n);
        auto temp = nums;
        height(nums, left);
        reverse(temp.begin(), temp.end());
        height(temp, right);
        reverse(right.begin(), right.end());
        long long res = 0;
        for(int i = 0;i<n;i++) {
            res = max(res, left[i] + right[i] - nums[i]);
        }

        return res;
    }
};