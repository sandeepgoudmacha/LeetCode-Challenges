class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if (matrix.size()==0) return 0;
        int m=matrix.size(),n=matrix[0].size();
        path=vector<vector<int>>(m,vector<int>(n, -1));
        int ans=-1;
        for(int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if (path[i][j] == -1) LIP(matrix, i, j);
                ans = max(ans, path[i][j]);
            }
        }
        return ans;
    }
    
private:
    vector<vector<int>> path;
    vector<pair<int, int>> dics{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int LIP(vector<vector<int>>& matrix, int i, int j) {
        int len = 0;
        for (auto p:dics) {
            int x = i + p.first, y = j + p.second;
            if (x<0||x>=matrix.size()||y<0||y>=matrix[0].size()) continue;
            if (matrix[x][y]>matrix[i][j]) {
                if (path[x][y]==-1) path[x][y] = LIP(matrix, x, y);
                len = max(len,path[x][y]);
            }
        }
        path[i][j] = len + 1;
        return path[i][j];
    }
};