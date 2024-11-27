class Solution {
public:
    int dij(vector<vector<pair<int,int>>> adj,int src,int n){
        vector<int> result(n,INT_MAX);
        result[0]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,0});

        while(!q.empty()){
            int node=q.top().second;
            int dist=q.top().first;
            q.pop();
            for(auto it:adj[node]){
                if(dist+it.second<result[it.first]){
                    q.push({dist+it.second,it.first});
                    result[it.first]=dist+it.second;
                }
            }
        }
        cout<<result[n-1]<<endl;
        return result[n-1];
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<pair<int,int>>> adj(n);
        vector<int> ans;
        for(int i=0;i<n-1;i++){
            adj[i].push_back({i+1,1});
        }
        for(auto it:queries){
            adj[it[0]].push_back({it[1],1});
            int a=dij(adj,0,n);
            ans.push_back(a);
        }
      
        return ans;
    }
};