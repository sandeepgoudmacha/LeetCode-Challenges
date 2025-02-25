class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        queue<pair<int,int>>q;
        vector<vector<bool>>vis(v.size(),vector<bool>(v[0].size(),false));
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]==2){
                    q.push({i,j});
                    vis[i][j]=true;
                }
            }
        }
        int count=0;
        while(!q.empty())
        {
            int size=q.size();
            int flag=0;
            for(int k=0;k<size;k++)
            {
                pair<int,int>p=q.front();
                int i=p.first;
                int j=p.second;
                cout<<i<<" "<<j<<endl;
                q.pop();
                if(i+1<v.size() && !vis[i+1][j] && v[i+1][j]==1)
                {
                    v[i+1][j]=2;
                    vis[i+1][j]=true;
                    flag++;
                    q.push({i+1,j});
                    cout<<vis[i+1][j]<<endl;
                }

                if(i-1>=0 && !vis[i-1][j] && v[i-1][j]==1)
                {
                    v[i-1][j]=2;
                    vis[i-1][j]=true;
                    flag++;
                    q.push({i-1,j});
                }

                if(j+1<v[0].size() && !vis[i][j+1] && v[i][j+1]==1)
                {
                    v[i][j+1]=2;
                    vis[i][j+1]=true;
                    flag++;
                    q.push({i,j+1});
                }

                if(j-1>=0 && !vis[i][j-1] && v[i][j-1]==1)
                {
                    v[i][j-1]=2;
                    vis[i][j-1]=true;
                    flag++;
                    q.push({i,j-1});
                }
            }
            if(flag>0)
                count++;
        }
        // if(flag>0) count++;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]==1)
                    return -1;
            }
        }
        return count;
    }
};