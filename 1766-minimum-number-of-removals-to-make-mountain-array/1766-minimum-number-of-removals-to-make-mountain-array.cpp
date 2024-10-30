class Solution {
public:
    int minimumMountainRemovals(vector<int>& a) {
        int n = a.size(), i, j;
        vector<int> l(n, 0), r(n, 0), t;

        t.push_back(a[0]);
        for (i = 1; i < n; ++i) {
            j = lower_bound(t.begin(), t.end(), a[i]) - t.begin();
            if (j == t.size())
                t.push_back(a[i]);
            else
                t[j] = a[i];
            l[i] = i + 1 - t.size();
        }

        t.clear();
        t.push_back(a[n - 1]);
        for (i = n - 2; i >= 0; --i) {
            j = lower_bound(t.begin(), t.end(), a[i]) - t.begin();
            if (j == t.size())
                t.push_back(a[i]);
            else
                t[j] = a[i];
            r[i] = n - 1 - i + 1 - t.size();
        }

        int ans = n;
        for (i = 0; i < n; ++i) {
            if (i + 1 - l[i] >= 2 && n - i - r[i] >= 2)
                ans = min(ans, l[i] + r[i]);
        }

        return ans;
    }
};