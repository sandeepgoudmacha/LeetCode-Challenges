class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size(),r=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(!q.empty()&&q.front()+k<=i) q.pop();
            int c=nums[i];
            if(q.size()%2==1) c=1-c;
            if(c==0){
                if(i+k>n) return -1;
                q.push(i);
                r++;
            }
        }
        return r;
    }
};
