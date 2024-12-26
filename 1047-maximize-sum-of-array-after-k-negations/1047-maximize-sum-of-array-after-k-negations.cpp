class Solution {
public:
    int largestSumAfterKNegations(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int n=a.size();
        for(int i=0;i<(int)a.size();i++){
            if(k==0) break;
            if(a[i]<=0){a[i]=-a[i]; cout<<a[i]<<endl;k--;  
            if(i==n-1 && k!=0) {sort(a.begin(),a.end());i=0;}
            continue;}
            if(a[i]>0 && i>0 && a[i]<a[i-1]){
                a[i]=-a[i];
            }
            if(a[i]>0 && i==0) a[i]=-a[i];
            if(a[i]>0 && i>0 && a[i]>=a[i-1]){
                a[i-1]=-a[i-1];
                i--;
            }
            k--;
            cout<<a[i] <<" .."<<endl;
        }
        int sum=0;
        for(auto x:a){
            sum+=x;
        }
        return sum;
    }
};