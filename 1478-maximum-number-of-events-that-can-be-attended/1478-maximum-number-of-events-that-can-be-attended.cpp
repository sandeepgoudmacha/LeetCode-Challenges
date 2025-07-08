class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        priority_queue<int,vector<int>,greater<int>>pq;
        sort(events.begin(),events.end());
        int n=events.size();
        int c=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,events[i][1]);
        }
        int j=0;
        for(int i=1;i<=maxi;i++){
            while(j<n && events[j][0]==i){
                pq.push(events[j++][1]);
            }
            while(!pq.empty() && pq.top()<i){
                pq.pop();
            }
            if(!pq.empty()){
                pq.pop();
                c++;
            }
        }
        return c;
    }
};