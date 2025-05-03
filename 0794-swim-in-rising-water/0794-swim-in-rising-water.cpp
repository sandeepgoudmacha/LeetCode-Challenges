class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    pq.push({grid[0][0], 0, 0});
        visited[0][0] = true;
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        while (!pq.empty()) {
            auto cur = pq.top();
        pq.pop();
            int t = cur[0], x = cur[1], y = cur[2];
            if (x == n - 1 && y == n - 1)
                return t;
         for (int i = 0; i < 4; ++i) {
                int nx = x + dx[i], ny = y + dy[i];
                if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    pq.push({max(t, grid[nx][ny]), nx, ny});
                }
            }
        }
        return -1;
    }
};
