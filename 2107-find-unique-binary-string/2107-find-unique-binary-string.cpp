class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
       int n=nums[0].length();
       int t=1<<n;

       for(int i=0;i<t;i++){
        string r=bitset<16>(i).to_string().substr(16-n);
        if(count(nums.begin(), nums.end(), r) == 0){ 
            return r;
        }
       }
       return "";
    }
};