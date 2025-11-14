class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int maxi=0;
        unordered_set<int> s(nums.begin(), nums.end());
        // sort(nums.begin(), nums.end());
        int i = 0;
        for(auto x:s){
            int c=1;
            if(!s.count(x-1)){
                int curr=x;
                c=1;
                while(s.count(curr+1)){
                    curr++;
                    c++;
                }
            }
            maxi = max(maxi,c);
        }
        return maxi;
    }
};