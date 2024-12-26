class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n1 =nums.size();
        set<int>s;
        for(auto x:nums){
            s.insert(x);
        }
        if(s.size() == n1) return 0;
        return 1;
    }
};