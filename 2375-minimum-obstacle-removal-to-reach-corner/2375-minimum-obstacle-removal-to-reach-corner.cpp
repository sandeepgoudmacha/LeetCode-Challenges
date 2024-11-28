class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        vis[0][0]=true;
        int ans=0;
        int dr[4]={0,0,1,-1};
        int dc[4]={1,-1,0,0};
        pq.push({0,{0,0}});
        while(!pq.empty())
        {
            int d=pq.top().first;
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            pq.pop();
            if(r==m-1 && c==n-1)
            {
                ans=d;
                break;
            }
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr<m && nr>=0 && nc<n && nc>=0 && !vis[nr][nc])
                {
                    vis[nr][nc]=true;
                    if(grid[nr][nc])pq.push({d+1,{nr,nc}});
                    else pq.push({d,{nr,nc}});
                }
            }
        }
        return ans;
    }
};