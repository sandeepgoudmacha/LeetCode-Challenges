class Solution {
public:
    vector<int> findPeak(vector<vector<int>>& mat){
        int l=0,r=mat[0].size()-1;
        vector<int>v(2,-1);
        while(l<=r){
            int mid=(l+r)/2;
            int ans=0;
            for(int i=0;i<(int)mat.size();i++){
                ans=(mat[i][mid]>mat[ans][mid]) ? i:ans;
            }
            bool left=(mid==0 || mat[ans][mid]>mat[ans][mid-1]);
            bool right=(mid==mat[0].size()-1 || mat[ans][mid]>mat[ans][mid+1]);
            if(left && right){
                v[0]=ans;v[1]=mid;
                return v;
            }
            else if(mid > 0 && mat[ans][mid]<mat[ans][mid-1]) r=mid-1;
            else l=mid+1;
        }
        // return
        
        return {-1,-1};
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
       
            vector<int>v=findPeak(mat);
        return v;

    }
};