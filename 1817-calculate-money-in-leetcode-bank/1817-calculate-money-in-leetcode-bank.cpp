class Solution {
public:
    int totalMoney(int n) {
        
        if(n<=7) {
            return (n*(n+1))/2;
        }
        int curr=(7*(7+1))/2;
        int sum=curr;
        int initial=1, end=7;
        n=n-7;
        while(n>0){
            initial++;
            if(n>=7){
                sum+=((initial+(initial+6))*((initial+6)-initial+1))/2;
                n-=7;
            }
            else{
               
                sum+=((initial+(initial+n-1))*((initial+n-1)-initial+1))/2;
                 n=0;
            }
        }
        return sum;
    }
};