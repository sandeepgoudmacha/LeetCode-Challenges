class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& t, int l) {
     sort(t.begin(), t.end());
    int n=t.size();
    vector<int> p(n+1,0);

    for (int i=0;i<n;++i)
        p[i+1]=p[i]+(t[i][1]-t[i][0]+1);

    int m=0,j=0;
    for (int i=0;i<n;++i) {
        int s=t[i][0],e=s+l-1;
        while (j<n && t[j][1]<=e) ++j;
        int c=p[j]-p[i];
        if (j<n && t[j][0]<=e)
            c+=max(0,e-t[j][0]+1);
        // m=max(m+1,c)
        m=max(m, c);
    }
    return m;
    }
};