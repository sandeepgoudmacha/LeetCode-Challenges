class Solution {
public:
vector<vector<int>> adj;
vector<int> vis;
int c=0;
void dfs(int i,int c){
    vis[i]=c;
    for(auto x:adj[i]){
        if(vis[x]==-1) dfs(x,c);
    }
}
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool>r;
        vector<pair<int,int>>v;
        for (int i=0;i<n;i++)
            v.push_back({nums[i],i});
        sort(v.begin(),v.end());
         adj.resize(n,{});
         vis.assign(n, -1); 
        for (int i=1;i<n;i++) {
        if (v[i].first-v[i-1].first<=maxDiff) {
                int u=v[i].second;
                int w=v[i - 1].second;
                adj[u].push_back(w);
                adj[w].push_back(u);
            }
        }
        for(int i=0;i<n;i++){
            if(vis[i]==-1) dfs(i,c++);
        }
        for(auto& q:queries){
            if(vis[q[1]]==vis[q[0]]) r.push_back(true);
            else r.push_back(false);
        }
        return r;
    }
};