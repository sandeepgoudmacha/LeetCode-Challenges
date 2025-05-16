class Solution {
public:
    int rob(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n,0);
         dp[0] = arr[0];
        for (int i = 1; i < n; i++) {
        int pick = arr[i];
        if (i > 1)
            pick += dp[i - 2];
        int nonPick = dp[i - 1];
         dp[i] = max(pick, nonPick);
    }
    return dp[n - 1];
    }
};