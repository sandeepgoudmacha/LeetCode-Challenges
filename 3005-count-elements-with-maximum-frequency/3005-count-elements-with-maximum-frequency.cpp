class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        int n=m.size(), maxi=INT_MIN, sum=0;
        for(auto x:m){
            if(x.second>maxi){
                maxi=x.second;
                sum=maxi;
            }
            else if(x.second == maxi){
                sum+=maxi;
            }
        }
        return sum;
    }
};