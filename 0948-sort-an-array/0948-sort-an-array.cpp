class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int min_val = *min_element(nums.begin(), nums.end());
           int n=nums.size();
           int range = m - min_val + 1; 
        vector<int>count(range,0);
        vector<int>res(n);
     
        for(int i=0;i<(int)nums.size();i++){
            count[nums[i]- min_val]++;
        }
        for(int i=1;i<range;i++){
            count[i]=count[i-1]+count[i];
        }
        for(int i=n-1;i>=0;i--){
            res[count[nums[i]-min_val]-1]=nums[i];
            count[nums[i]- min_val]--;
        }
        return res;
    }
};