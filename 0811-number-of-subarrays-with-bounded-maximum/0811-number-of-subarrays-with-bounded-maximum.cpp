class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int cR=0,len_r=0;
        int cL=0,len_l=0;
        for(int x:nums) {
            if(x<=right) {
                len_r++;
                cR+=len_r;
                cout<<cR<<endl;
            } 
            else len_r=0;
            if (x<=left-1){
                len_l++;
                cL+=len_l;
                cout<<cL<<endl;
            }
             else len_l=0;
        }
        return cR-cL;
    }
};