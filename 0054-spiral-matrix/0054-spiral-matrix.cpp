class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int t=0,d=n-1;
        int l=0,r=m-1;
        vector<int>v;
        while(t<=d && l<=r){

                for(int i=l;i<=r;i++){
                    v.push_back(matrix[t][i]);
                }
            t++;
            for(int i=t;i<=d;i++){
                v.push_back(matrix[i][r]);
            }
            r--;
            if(t<=d){
                for(int i=r;i>=l;i--){
                    v.push_back(matrix[d][i]);
                }
                d--;
            }
            if(l<=r){
                for(int i=d;i>=t;i--){
                    v.push_back(matrix[i][l]);
                }
                l++;
            }

        }
        return v;
    }
};