class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        // int n=p.size();
                int m=p.size();

        queue<int>q;
        vector<vector<int>>adjList(n);
        for(int i=0;i<m;i++){
            adjList[p[i][1]].push_back(p[i][0]);
        }
        vector<int>in(n,0);
        for(int i=0;i<n;i++){
            for(auto x:adjList[i]) in[x]++;
        }
        for(int i=0;i<n;i++){
            if(in[i]==0) q.push(i);
        }
        int c=0;
        while(!q.empty()){
            int a=q.front();
            q.pop();
            c++;
            for(auto x:adjList[a]){
                in[x]--;
                if(in[x]==0) q.push(x);
            }
        }
        return c==n;
    }
};