// class Solution {
// public:
//     int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
//         int m=mat.size();
//         int n=mat[0].size();
//         for(int i=0;i<(int)arr.size();i++){
//             for(int j=0;j<m;j++){
//                 for(int k=0;k<n;k++){
//                     if(mat[j][k]==arr[i]){
//                      mat[j][k]=0;
//                      break;
//                     }
//                 }
//             }
//             bool b=0;
//             for(int j=0;j<m;j++){
//                 for(int k=0;k<n;k++){
//                     if(mat[j][k]==0){
//                         if(k==n-1){
//                             b=1;
//                             break;
//                         }
//                      continue;
//                     }
//                     else{
//                         break;
//                     }
//                 }
//         }
      
//         if (b==1){
//             return i;
//         }
//          for(int j=0;j<n;j++){
//                 for(int k=0;k<m;k++){
//                     if(mat[k][j]==0){
//                         if(k==m-1){
//                             b=1;
//                             break;
//                         }
//                      continue;
//                     }
//                     else{
//                         break;
//                     }
//                 }
//         }
//          if (b==1){
//             return i;
//         }
//     }
//     return 0;
//     }
// };
class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> rowNonZero(m, n);
        vector<int> colNonZero(n, m);

        unordered_map<int, pair<int, int>> positions;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                positions[mat[i][j]] = {i, j};
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            auto [row, col] = positions[arr[i]];

            mat[row][col] = 0;

            rowNonZero[row]--;
            colNonZero[col]--;

            if (rowNonZero[row] == 0) {
                return i;
            }

            if (colNonZero[col] == 0) {
                return i;
            }
        }

        return -1;
    }
};
