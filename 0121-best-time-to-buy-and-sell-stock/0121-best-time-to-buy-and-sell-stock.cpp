class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int res=INT_MAX,maxi=0;
        if(prices.size()<=1) return 0;
        for(int i=0;i<prices.size();i++){
          if(prices[i]<res){
            res=prices[i];
          }
          if(maxi<prices[i]-res){
            maxi=prices[i]-res;
          }
        }
        return maxi;
    }
};