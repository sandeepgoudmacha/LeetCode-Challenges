class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>a(2,0);
        int n=grid[0].size();
        map<int,int>m;
        for (int i = 1; i <= n*n; i++) {
            m[i] = 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[grid[i][j]]++;
        }
    }
    for(auto x:m){
        if(x.second==2) a[0]=x.first;
        if(x.second==0) a[1]=x.first;
    }
    return a;
    }
};