class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()<=3) return nums[0];
        sort(nums.begin(),nums.end());
        int x=0,c=0;
        for(int i=0;i<nums.size();i+=3){
          if(i+1>=nums.size() || nums[i]!=nums[i+1] ) return nums[i];
        }
        return 0;
    }
};