class Solution {
public:
    long long findFlowersUnderNDays(vector<int>&v, int days, int m, int k){
        long long adj=0;
        long long d=0;
        for(int i=0;i<(int)v.size();i++){
            if(v[i]<=days){
                adj++;
                if(adj==k) {
                    d++;
                    // i+=adj-1;
                    adj=0;
                    
                }
            }
            else{
                adj=0;
            }

        }
        return d*k;
    } 
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()) return -1;
        int l=1,r=*max_element(bloomDay.begin(),bloomDay.end());
        while(l<=r){
            int mid=(l+r)/2;
            cout<<mid<<endl;
            long long adjFlowers=findFlowersUnderNDays(bloomDay, mid, m, k);
            cout<<adjFlowers<<" "<<m*k<<endl;
            if(adjFlowers >= (m*k)){
                r=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
};