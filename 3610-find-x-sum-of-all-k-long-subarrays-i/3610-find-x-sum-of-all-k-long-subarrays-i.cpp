class Solution {
public:
    struct compare{
        bool operator()(pair<int,int>a, pair<int,int>b){
            if(a.second==b.second) return a.first<b.first;
            return a.second<b.second;
        }
    };

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        if(n<x) {
           int res= accumulate(nums.begin(),nums.end(),0);
           return {res};
        }
        int i=0;
        vector<int>res;
        // priority_queue<pair<int,int>,vector<pair<int,int>>,compare>pq;
        while(i+k<=n){
            vector<pair<int,int>>v;
            for(int j=i;j<i+k;j++){
                bool b=1;
                for(auto &y:v){
                    if(y.first==nums[j]){
                        y.second++;
                        b=0;
                        break;
                    }
                }
                if(b)
                    v.push_back({nums[j],1});
            }
            priority_queue<pair<int,int>, vector<pair<int,int>>, compare> pq(v.begin(), v.end());
            int c=x,sum=0;
            while(!pq.empty() && c>0){
                // if(c==0) break;
                sum+=pq.top().second*pq.top().first;
                pq.pop();
                c--;
            }
            res.push_back(sum);
            i++;
        }
        return res;
        
    }
};