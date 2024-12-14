class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int maxi=0;
        vector<int>v={0,0};
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1) count++;
                if(count>maxi){
                     maxi=count;
                     v.clear();
                     v.push_back(i);
                     v.push_back(maxi);
                }
            }
        }
        return v;
    }
};