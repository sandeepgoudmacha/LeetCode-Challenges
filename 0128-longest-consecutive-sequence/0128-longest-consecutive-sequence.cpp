class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(), nums.end());
        int i = 0;
        int maxi=1;
        while(i<n){
            int curr = nums[i];
            int j = i;
            int c=1;

            while(j<n-1){
                if(nums[j] == nums[j+1]) {
                    j++;
                    continue;
                }
                else if(curr+1 == nums[j+1]){
                curr++;
                c++;
                j++;
                }
                else break;
            
            }
            maxi = max(maxi,c);
            i=j+1;
        }
        return maxi;
    }
};