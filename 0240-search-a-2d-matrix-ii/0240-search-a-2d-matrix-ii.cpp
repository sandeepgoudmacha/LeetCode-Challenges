class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,r=matrix[0].size()-1;
        while(r>=0 && l<matrix.size()){
            if(matrix[l][r]==target) return 1;
            else if(matrix[l][r]>target) r--;
            else l++;
        }
        // if(matrix[l][r]==target) return 1;
        return 0;
    }
};