class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int>&out,int i,vector<int> &c,vector<int>&vis,vector<int>&path){
        vis[i]=1;
        path[i]=1;
        for(auto x:graph[i]){
if(!vis[x]){
            if(dfs(graph,out,x,c,vis,path)) return true;
}
            else if(path[x]) return true;
        }
        // if(find(out.begin(),out.end(),i)!=out.end()){
        //     c++;
        // }
        path[i]=0;
        c[i]=1;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>out;
        for(int i=0;i<n;i++){
            int c=0;
            for(auto x:graph[i]){
                c++;
            }
            if(c==0) out.push_back(i);
        }
        vector<int>v;
        vector<int>vis(n,0);
        vector<int>path(n,0);
                vector<int>c(n,0);

        for(int i=0;i<n;i++){
            // int c=0;
            dfs(graph,out,i,c,vis,path);
            // if(b){
            //  if(c==graph[0].size()) v.push_back(i);
            // }
        }
                vector<int>r;

        for(int i=0;i<n;i++){
            if(c[i]) r.push_back(i); 
        }
        return r;
    }
};