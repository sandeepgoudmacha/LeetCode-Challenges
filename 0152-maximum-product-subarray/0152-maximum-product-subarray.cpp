class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int product = 1;

        // prefix product
        for(int i = 0; i < nums.size(); i++){
            product *= nums[i];
            maxi = max(maxi, product);
            if(product == 0) product = 1;
        }

        product = 1;

        // suffix product
        for(int i = nums.size() - 1; i >= 0; i--){
            product *= nums[i];
            maxi = max(maxi, product);
            if(product == 0) product = 1;
        }

        return maxi;
    }
};
