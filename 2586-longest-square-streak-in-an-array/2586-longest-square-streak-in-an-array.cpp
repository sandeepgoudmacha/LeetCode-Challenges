class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, int> mp;

        for(int i : nums) mp[i]++;

        long long ans = 0;
        for(int i : nums){
            long long count = 0 , temp = i;
            while(mp[temp]){
                count++;
                if(temp > sqrt(1e5)) break;
                temp *= temp;
            }
            ans = max(ans , count);
        }
        if(ans <= 1) return -1;
        return ans;
    }
};