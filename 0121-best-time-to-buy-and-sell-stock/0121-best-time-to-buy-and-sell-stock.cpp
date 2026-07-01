class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,res=INT_MAX;
        int n=prices.size();
        if(n<=1) return 0;
        int st=0, beg=-1, end=-1;
        for(int i=0;i<n;i++){
            if(prices[i]<res){
                res=prices[i];
                st=i;
            }
            if(maxi<prices[i]-res){
                maxi=prices[i]-res;
                beg=st;
                end=i;
            }
        }
        return maxi;
    }
};