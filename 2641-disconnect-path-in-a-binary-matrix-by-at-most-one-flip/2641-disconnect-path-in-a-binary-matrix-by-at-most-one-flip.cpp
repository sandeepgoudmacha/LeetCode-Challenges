class Solution {
public:
    bool isPossibleToCutPath(vector<vector<int>>& grid) {
      int m=grid.size(),n=grid[0].size(),mod[2]={1000000009,1000000007};
        int way1[m][n][2],way2[m][n][2];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<2;k++){
                    if(i==0&&j==0){
                        way1[i][j][k]=1;
                        continue;
                    }
                    if(grid[i][j]==0){
                        way1[i][j][k]=0;
                        continue;
                    }
                    way1[i][j][k]=0;
                    if(i>0)way1[i][j][k]=(way1[i][j][k]+way1[i-1][j][k])%mod[k];
                    if(j>0)way1[i][j][k]=(way1[i][j][k]+way1[i][j-1][k])%mod[k];
                }
            }
        }
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                for(int k=0;k<2;k++){
                    if(i==m-1&&j==n-1){
                        way2[i][j][k]=1;
                        continue;
                    }
                    if(grid[i][j]==0){
                        way2[i][j][k]=0;
                        continue;
                    }
                    way2[i][j][k]=0;
                    if(i<m-1)way2[i][j][k]=(way2[i][j][k]+way2[i+1][j][k])%mod[k];
                    if(j<n-1)way2[i][j][k]=(way2[i][j][k]+way2[i][j+1][k])%mod[k];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0&&j==0)||(i==m-1&&j==n-1))continue;
                bool same=true;
                for(int k=0;k<2;k++){
                    int way=(way1[i][j][k]*1LL*way2[i][j][k])%mod[k];
                    if(way!=way1[m-1][n-1][k])same=false;
                }
                if(same)return true;
            }
        }
        return false;
    }
};