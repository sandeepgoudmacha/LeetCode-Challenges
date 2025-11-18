class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        m[0]=1;
        int sum=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(m.find(sum-k)!=m.end()){
                c+=m[sum-k];
            }
            // if(m.find(sum)==m.end()){
                m[sum]++;
            // }
        }
        return c;
    }
};