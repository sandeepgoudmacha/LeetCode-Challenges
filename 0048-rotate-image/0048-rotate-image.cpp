class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
    vector<vector<int>>v(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            v[i][n-j-1]=matrix[j][i];
        }
    }
    matrix=v;
    }
};