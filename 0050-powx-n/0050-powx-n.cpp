class Solution {
public:
    double myPow(double x, long long n) {
        if(n==0) return 1;
        if(n<0){
            n=-n;
            x=1/x;
        }
        return n%2==0 ? myPow(x*x,n/2) : x* myPow(x,n-1);
    }
};