class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0, count = 0;

        for (int num : nums) {
            if (num == 0) {
                count++;
                res += count;
            } else {
                count = 0;
            }
        }

        return res;
    }
};
