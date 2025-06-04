class Solution {
public:
    int maximumEnergy(vector<int>& e, int k) {
         int ans=INT_MIN;
         
        for(int i=0;i<e.size();i++){
            if(i-k>=0){
                if(e[i]+e[i-k]>e[i])
                 e[i]=e[i]+e[i-k];
                 cout<<e[i]<<endl;
            }
        }
        for(int i=e.size()-k;i<e.size();i++) {
            ans=max(ans,e[i]);
            cout<<ans<<endl;
        }
        return ans;
    }
};