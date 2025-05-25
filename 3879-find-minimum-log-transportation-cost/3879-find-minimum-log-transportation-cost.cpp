class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(n<=k && m<=k) return 0;
        long long maxi=max(n,m);
        maxi-=k;
        long long cost=1;
        cost*=k*maxi;
        return cost;
    }
};