class Solution {
public:
    const long long mod=1000000000+7;
    long long findValue(long x,long long n){
        if(n<=0) return 1;
        return n%2==0? (findValue((x*x)%mod,n/2)):(x*findValue(x%mod,n-1))% mod;
    }
    int countGoodNumbers(long long n) {    
        return ((findValue(5,(n+1)/2))*(findValue(4,(n)/2)))%mod;
    }
};