class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
          int n=startTime.size();
        int ans=0;
        int start=0;
        vector<int>t;
        for (int i=0;i<n;i++) {
            int z=startTime[i]-start;
            start=endTime[i];
            t.push_back(z);
        }
        t.push_back(eventTime-start);
        int s=0;
        int z=t.size();
        int j=0;
        for (int i=0;i<=z;i++) {
            if (i!=z && (i-j)<k)
                s+=t[i];
            else {
                s+=(i!=z)?t[i]:0;
                ans=max(ans,s);
                s-=t[j];
                j++;
            }
        }
        return ans;
    }
};