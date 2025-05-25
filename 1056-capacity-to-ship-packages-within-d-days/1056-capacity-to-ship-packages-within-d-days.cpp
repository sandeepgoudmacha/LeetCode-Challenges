class Solution {
public:
    int calculateShipCapacity(vector<int>& v, int w){
        int d=0,sumOfWeights=0;
        for(int i=0;i<(int)v.size();i++){
           if (sumOfWeights + v[i] > w) {
            d++;
            sumOfWeights = 0;
            }
            sumOfWeights += v[i];
        }
        if(sumOfWeights<=w) d++;
        cout<<sumOfWeights<<endl;
        cout<<d<<endl;
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int l=*max_element(weights.begin(), weights.end()), r = accumulate(weights.begin(), weights.end(), 0);;
        while(l<=r){
            int mid=(l+r)/2;
            cout<<mid<<endl;
            int shipCapacity=calculateShipCapacity(weights, mid);
            if(shipCapacity <= days){
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return l;
    }
};