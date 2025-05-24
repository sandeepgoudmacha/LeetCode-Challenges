class Solution {
public:
    int maxi(vector<int>&v){
        auto i=max_element(v.begin(),v.end());
        return *i;
    }
    long long totalHours(vector<int>&v,int hour){
        long long total=0;
        for(int i=0;i<(int)v.size();i++){
    total += (v[i] + hour - 1) / hour;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int n=piles.size();
       int l=1,r=maxi(piles);
        cout<<l<<" "<<r<<endl;
        // int sum=0;
        while(l<=r){
            int mid=(l+r)/2;
             long long sum=totalHours(piles,mid);
            if(sum<=h){
                r=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
};