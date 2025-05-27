class Solution {
public:
    bool findingTarget(vector<int>&v, int target){
        int l=0,r=v.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]==target) return true;
            if(v[mid]<target) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c=matrix[0].size(),r=matrix.size();
        for(int i=0;i<r;i++){
            if(target>=matrix[i][0] && target<=matrix[i][c-1]){
                if(findingTarget(matrix[i],target)) return true;
                else return false;
            }
        }
        return 0;
    }
};