class Solution {
public:
    int maxDifference(string s) {
        map<char,int>m;
        // priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0;i<s.length();i++){
            // pq.push_back()
            m[s[i]]++;
        }
        int maxd=INT_MIN,mine=INT_MAX;
        for(auto x:m){
            if(x.second % 2==0){
                // if(maxe<x.second) maxe=x.second;
                if(mine>x.second) mine=x.second;
            }
            if(x.second % 2!=0){
                if(maxd<x.second) maxd=x.second;
                // if(mind>x.second) mind=x.second;
            }
            // v.push_back(x.second);
        }
        return (maxd-mine);

    }
};