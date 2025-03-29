class Solution {
public:
    void solve(vector<vector<char>>& board) {
        queue<pair<int,int>>q;
        queue<pair<int,int>>q2;
        int n= board.size();
        int m= board[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int j = 0; j < m; j++) {
            if(board[0][j] == 'O') {
                v[0][j] = 1;
                q.push({0, j});
            }
            if(board[n-1][j] == 'O') {
                v[n-1][j] = 1;
                q.push({n-1, j});
            }
        }

        for(int i = 0; i < n; i++) {
            if(board[i][0] == 'O') {
                v[i][0] = 1;
                q.push({i, 0});
            }
            if(board[i][m-1] == 'O') {
                v[i][m-1] = 1;
                q.push({i, m-1});
            }
        }

        for(int i = 1; i < n-1; i++) {
            for(int j = 1; j < m-1; j++) {
                if(board[i][j] == 'O') {
                    q2.push({i, j});
                }
            }
        }

        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        while(!q.empty()){ 
            int indA=q.front().first;
            int indB=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=indA+dx[i],ny=indB+dy[i];
                if(nx>=0 && ny>=0 && nx<n && ny<m && board[nx][ny]=='O' && v[nx][ny]==0){
                    v[nx][ny]=1;
                    q.push({nx,ny});
                    // cout<<v
                }
            }
        }
        while(!q2.empty()){
            int nx=q2.front().first;
            int ny=q2.front().second;
            q2.pop();
            if(!v[nx][ny])
            {
                board[nx][ny]='X';
            }
        }

    }
};