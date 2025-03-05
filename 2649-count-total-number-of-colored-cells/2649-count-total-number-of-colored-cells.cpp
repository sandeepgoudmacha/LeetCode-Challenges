class Solution {
public:
    long long coloredCells(int n) {
        long long r=1;
        if(n==0 || n==1) return n;
        for(int i=1;i<n;i++){
            r=r + (4*i);
        }
        return r;
    }
};