class Solution {
public:
    bool possible(vector<int>& candies, long long k, int m){
        for (int i=0;i<candies.size();i++){k-=(candies[i]/m);}
        return k<=0;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long s=1,e=1e9,m=0,a=-1;
        for (int i=0;i<candies.size();i++){m+=candies[i];}
        if (m<k){return 0;}
        while (s<=e){
            m=(s+e)/2;
            if (possible(candies,k,m)){a=m;s=m+1;}
            else{e=m-1;}
        }
        return a;
    }
};