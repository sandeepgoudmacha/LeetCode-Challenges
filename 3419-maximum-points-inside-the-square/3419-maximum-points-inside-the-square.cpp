class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& p, string s) {
        map<char, int> q;
        int c = 0, ans = 0;
        vector<vector<int>> v;
        for (auto i : p) {
            int a = max(abs(i[0]), abs(i[1])) * 2;
            v.push_back({a, c});
            c++;
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++) {
            char f = s[v[i][1]];
            int l = v[i][0];
            int j = i;
            bool bl = 1;
            while (j < v.size() && l == v[j][0]) {
                if (q.count(s[v[j][1]])) {
                    bl = 0;
                    break;
                }
                q[s[v[j][1]]]++;
                j++;
            }
            if (bl == 0)
                break;
            ans += j - i;
            i = j - 1;
        }
        return ans;
    }
};