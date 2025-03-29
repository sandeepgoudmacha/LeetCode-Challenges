class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        // if(mat!=0) return mat;
      vector<vector<int>>v(n,vector<int>(m,0));
      vector<vector<int>>r(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] == 0){
                v[i][j] =1;
                q.push({{i,j},0});
            }
        }
      }
      int dx[4]={-1,1,0,0};
      int dy[4]={0,0,-1,1};
        while(!q.empty()){
            int a=q.front().first.first;
            int b=q.front().first.second;
            int distance = q.front().second;
            r[a][b]=distance;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=dx[i]+a,ny=dy[i]+b;
                
                if(nx>=0 && ny>=0 && nx<n && ny<m && v[nx][ny] == 0) {
                        q.push({{nx,ny},distance+1});
                        v[nx][ny]=1;
                }
            }
        }
        return r;
    }
};