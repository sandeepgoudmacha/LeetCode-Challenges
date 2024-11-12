class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size();
        sort(items.begin(), items.end());
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        int m = queries.size();
        for(int i = 0; i < m; i++){
            pq.push({queries[i],i});
        }
        vector<int> ans(m,0);
        int mx = 0;
        for(int i = 0; i < n; i++){
            mx = max(mx,items[i][1]);
            cout << items[i][0] << " " << mx << endl;
            items[i][1] = mx;
        }
        int j = -1;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            while(j + 1 < n && it.first >= items[j+1][0]){
                j++;
            }
            if(j != -1){
                ans[it.second] = items[j][1];
            }
        }
        return ans;
    }
};