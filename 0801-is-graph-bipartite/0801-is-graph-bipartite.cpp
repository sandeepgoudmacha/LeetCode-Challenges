class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>v(n,0);
        queue<pair<int,int>>q;
  for (int i = 0; i < n; i++) {
            if (v[i] == 0) { 
                v[i] = 1;    
                q.push({i, 1});
        while(!q.empty()){
            int node=q.front().first;
            int c=q.front().second;
            q.pop();
            for(auto x:graph[node]){
                if(!v[x]){
                     
                    if(c==1) {
                        q.push({x,2});v[x]=2;
                    }
                    else {
                        q.push({x,1});v[x]=1;
                    }
                }
                else {
                    if(v[x]==c) return 0;
                }
            }
        }}
        }
        return 1;
    }
};