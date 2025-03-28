class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // if(image.empty()) return image;
                int m = image.size(), n = image[0].size();
       int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
                queue<pair<int, int>> mat;
  int initialColor = image[sr][sc];
        if (initialColor == color) return image;
        image[sr][sc] = color;
                mat.push({sr,sc});
        while(!mat.empty()){
            int k = mat.size();
            while(k--){
                int x = mat.front().first, y = mat.front().second;
                mat.pop();
                for(int i = 0; i < 4; ++i){
                    int nx = x + dx[i], ny = y + dy[i];
                    if(nx < 0 || ny < 0 || nx >= m || ny >= n || image[nx][ny] != initialColor) continue;
                    image[nx][ny] = color;
                    mat.push({nx, ny});
                }
            }
        }
        return image;
    }
};