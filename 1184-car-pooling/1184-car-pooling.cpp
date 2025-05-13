class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       map<int,int>m;
        for(auto x:trips){
        m[x[1]]+=x[0];
        m[x[2]]-=x[0];
        }
        int c=0;
        for(auto x:m){
        c+=x.second;
        cout<<c<<" ";
        if(c>capacity) return false;
        }
        return true;
    }
};