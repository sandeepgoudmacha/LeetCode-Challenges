class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        int n=nums.size();
        // if(m.size() != n/2) return 0;
        bool b=0;
        for(auto x:m){
            if(x.second>0 && x.second%2 == 0){
                b=1;
            }
            else{
                return 0;
            }

        }
        return 1;
    }
};