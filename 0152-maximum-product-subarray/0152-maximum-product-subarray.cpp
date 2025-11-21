class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int currentMaxProduct = nums[0];
        int currentMinProduct = nums[0];
        int finalMaxProduct = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(currentMaxProduct, currentMinProduct);
            }
            currentMaxProduct = max(nums[i], currentMaxProduct*nums[i]);
            currentMinProduct = min(nums[i], currentMinProduct*nums[i]);
            finalMaxProduct = max(finalMaxProduct, currentMaxProduct);
        }
        return finalMaxProduct;
    }
};