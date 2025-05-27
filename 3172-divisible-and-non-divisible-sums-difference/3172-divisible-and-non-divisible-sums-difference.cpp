class Solution {
public:
    int differenceOfSums(int n, int m) {
        int t=(n*(n+1)/2);
        int d=n/m;
        d=m*((d*(d+1))/2);
        t=t-(2*d);
        return t;
    }
};