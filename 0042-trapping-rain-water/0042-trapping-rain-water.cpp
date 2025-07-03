class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l=0,r=n-1;
        int leftMax=0,rightMax=0;
        int total=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(leftMax<=height[l]){
                    leftMax=height[l];
                }
                else{
                    total+=leftMax-height[l];
                }
                l++;
            }
            else{
                if(rightMax<=height[r]){
                    rightMax=height[r];
                }
                else{
                    total+=rightMax-height[r];
                }
                r--;
            }
        }


        return total;
    }
};
