class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        unordered_map<int, int> a;
        set<int> d;
        vector<pair<int, int>> b;
        for (int c : nums) {
            a[c]++;
            // cout<<a[c]<<endl;
            b.push_back({c - k, +1});
            b.push_back({c + k + 1, -1});
        }
        for (auto& f : a) {
            d.insert(f.first);
        }
        for (auto& e : b) {
            d.insert(e.first);
        }
        sort(b.begin(), b.end());
        int i = 0, g = 0, h = 0;
        for (int j : d) {
            while (g < b.size() && b[g].first <= j) {
                h += b[g].second;
                g++;
                // cout<<g<<" "<<h<<endl;
            }
            int m = a.count(j) ? a[j] : 0;
            int l = m + min(numOperations, h - m);
            i = max(i, l);
            // cout<<i<<endl;
        }
        return i;
    }
};
