class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        queue<pair<int,int>>q;
        int n=v.size();
        int m=v[0].size();
        int total=0,minutes=0,count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==2) q.push({i,j});
                if(v[i][j]!=0) total++;
            }
        }
        int directionX[4] = {-1,1,0,0};
        int directionY[4] = {0,0,-1,1};
        while(!q.empty()){
             int queueSize = q.size();
             count+=queueSize;
            //  int i=0;
             while(queueSize--){
                int qX = q.front().first, qY = q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int impDirectionX = qX+directionX[i], impDirectionY = qY+directionY[i];
                    if( impDirectionX<0||impDirectionY <0||impDirectionX>=n||impDirectionY >=m || v[impDirectionX][impDirectionY] != 1 ) continue;
                    v[impDirectionX][impDirectionY]=2;
                    q.push({impDirectionX,impDirectionY});
                }
                
             }
             if(!q.empty()) minutes++;
        }
        return (total == count)? minutes:-1; 
        }
};