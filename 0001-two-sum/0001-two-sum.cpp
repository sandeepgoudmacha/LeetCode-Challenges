
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0;i<(int)nums.size();i++){
            for(int j=i+1;j<(int)nums.size();j++){
                if(nums[i]+nums[j]==target){
                   v.push_back(i);
                   v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};
