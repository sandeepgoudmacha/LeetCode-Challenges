class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int bit = nums[n-1];
        long long int ans = 0;
        int end = n;

        for(int i = n-2; i>=0; i--)
        {
            bit = (bit & nums[i]);
            if(bit == 0)
            {
                if(end == n)
                end = i;

                for(int j = n-1; j>end; j--)
                {
                    if((nums[i] & nums[j]) == 0)
                    {
                        long long int temp = (1LL * nums[i] * nums[j]);
                        if(temp > ans)
                        {
                            ans = temp;
                            end = j;
                            break;
                        }
                    }
                }
                if(end == i)
                end = n;
            }
        }
        return ans;
    }
};