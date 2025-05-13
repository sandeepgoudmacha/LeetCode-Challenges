class Solution {
public:
    int largestPathValue(string c, vector<vector<int>>& edges) {
         int n=c.size();
        vector<vector<int>>g(n);
        vector<int> id(n, 0);
        for (const auto a:edges) {
            g[a[0]].push_back(a[1]);
            id[a[1]]++;
        }
        queue<int> q;
        vector<vector<int>>dp(n,vector<int>(26, 0));
        for (int i=0;i<n;i++) {
        if (id[i]==0)
             q.push(i);
        }
        int r=0;
        while(!q.empty()) {
            int node=q.front();
            q.pop();
            dp[node][c[node]-'a']++;
            r = max(r, dp[node][c[node]-'a']);
            for (int nxt:g[node]) {
            for (int i=0;i<26;i++) 
                dp[nxt][i]=max(dp[nxt][i], dp[node][i]);
            if(--id[nxt]==0)
                q.push(nxt);
            }
            }
            for (int i=0;i<n;i++) {
            if (id[i]>0)
            return -1;
        }
    return r;
    }
};