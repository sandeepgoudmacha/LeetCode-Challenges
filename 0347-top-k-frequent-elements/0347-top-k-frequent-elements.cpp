class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            
        }
        for(auto x:m){
            pq.push({x.second,x.first});
        }
        // while(!pq.empty()){
        //     cout<<pq.top().first<< pq.top().second<<endl;
        //     pq.pop();
        // }
        for(int i=0;i<k;i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};