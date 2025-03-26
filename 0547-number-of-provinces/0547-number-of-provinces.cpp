class Solution {
public:
    void dfs(int i, vector<int>&v, vector<vector<int>>&isConnected){
        v[i]=1;
        for(auto x:isConnected[i]){
            if(!v[x]){
                dfs(x,v,isConnected);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] == 1 && i!=j){
                    v[i].push_back(j);
                    v[j].push_back(i);
                }
            }
        }
    vector<int> a(n, 0); 
        int c=0;
        for(int i=0;i<n;i++){
            if(!a[i]){
                c++;
                dfs(i,a,v);
            }
        }
        return c;
    }
};