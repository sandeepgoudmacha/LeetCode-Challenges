class Solution {
public:
    void dfs(vector<int>&v,vector<pair<int,int>>&path,vector<int>& edges,int i,int d,int &w){
        if(i==-1 || v[i]) return;
        v[i]=1;
        path[i].first=1;
        path[i].second=d;
        if(edges[i]!=-1){
        // for(int x=0;x<1;x++){
            if(!v[edges[i]]){
                dfs(v,path,edges,edges[i],d+1,w);
            }
            else if(path[edges[i]].first){
               w= max(w,(path[i].second-path[edges[i]].second)+1);
            }
        // }
        }
        path[i].first=0;
        // path[i].second--;
        }
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int>v(n,0);
        vector<pair<int,int>>path(n);
        int w=-1;
        for(int i=0;i<n;i++){
            // int d=0;
            if(!v[i]){
                dfs(v,path,edges,i,0,w);
                // c=max(w,c);
            }
        }
        return w;
    }
};