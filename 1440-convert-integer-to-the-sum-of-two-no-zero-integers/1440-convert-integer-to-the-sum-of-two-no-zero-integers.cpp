class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int a=i;
            int b=n-i;
            // int c=n;
            while (a > 0) {
                int digit = a % 10; 
                if (digit == 0) break;
                a /= 10; 
            }
            if(a!=0 ) continue;
            while (b > 0) {
                int digit = b % 10; 
                if (digit == 0) break;
                b /= 10; 
            }
            if(b!=0) continue;
            if(a==0  && b==0) return {i,n-i};
        }
        return {};
    }
};