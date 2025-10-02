class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int res=INT_MAX,maxi=0;
        if(prices.size()<=1) return 0;
        for(int i=0;i<prices.size();i++){
             res=min(res,prices[i]);
            maxi=max(maxi, prices[i]-res);
        }
        return maxi;
    }
};