class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int currentMaxProduct = 1;
        int finalMaxProduct = INT_MIN;
        for(int i=0;i<n;i++){
           currentMaxProduct*=nums[i];
           finalMaxProduct=max(finalMaxProduct, currentMaxProduct);
           if(currentMaxProduct==0)
                currentMaxProduct=1;
        }
        currentMaxProduct=1;
        for(int i=n-1;i>=0;i--){
           currentMaxProduct*=nums[i];
           finalMaxProduct=max(finalMaxProduct, currentMaxProduct);
           if(currentMaxProduct==0)
                currentMaxProduct=1;
        }
        return finalMaxProduct;
    }
};