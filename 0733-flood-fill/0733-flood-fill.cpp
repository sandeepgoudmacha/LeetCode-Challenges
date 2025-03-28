class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>>q;
        if(image[sr][sc] == color) return image;
        q.push({sr,sc});
        int n=image.size();
        int m=image[0].size();
        int dx[4] = {-1,1,0,0};
        int dy[4] = {0,0,-1,1};
        int initialColor = image[sr][sc];
        image[sr][sc] = color;
        while(!q.empty()){
            int qSize=q.size();
            while(qSize--){
                int newX = q.front().first,newY= q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int X = newX+dx[i],Y=newY+dy[i];
                    if(X <0 || Y<0 || X>=n || Y>=m || image[X][Y] != initialColor ) continue;
                    image[X][Y] = color;
                    q.push({X,Y});
                }
            }
        }
        return image;
    }
};