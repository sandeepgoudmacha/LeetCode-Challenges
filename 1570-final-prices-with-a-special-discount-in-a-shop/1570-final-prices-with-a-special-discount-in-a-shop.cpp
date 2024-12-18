class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // map<int, int>m;
        vector<int>ans;
        for(int i=0; i<(int)prices.size(); i++){
            bool b=0;
            for(int j=i+1;j<(int)prices.size(); j++){
                if(prices[j]<=prices[i]){
                    // ans[i]=prices[i]-prices[j];
                    ans.push_back(prices[i]-prices[j]);
                    b=1;
                    break;
                }
            } 
            if(b==0) ans.push_back(prices[i]);
        }
        int n=prices.size();
        // ans.push_back(prices[n-1]);
        return ans;
    }
};