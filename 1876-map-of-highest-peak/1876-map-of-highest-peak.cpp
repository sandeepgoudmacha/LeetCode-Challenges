class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n=isWater.size();
        int m=isWater[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>v(n,vector<int>(m,0));
        vector<vector<int>>h(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j] == 1) {
                    q.push({{i,j},0});
                    v[i][j]=1;
                }
            }
        }
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        while(!q.empty()){
            int indA=q.front().first.first;
            int indB=q.front().first.second;
            int cellH=q.front().second;
            q.pop();
            h[indA][indB]=cellH;
            for(int i=0;i<4;i++){
                int nx=dx[i]+indA,ny=dy[i]+indB;
                if(nx>=0 && ny>=0 && nx<n && ny <m && v[nx][ny]==0){
                    v[nx][ny]=1;
                    q.push({{nx,ny},cellH+1});
                }
            }

        }
        return h;
    }
};