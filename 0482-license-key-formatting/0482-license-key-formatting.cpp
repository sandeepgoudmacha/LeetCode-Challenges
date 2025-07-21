class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        // string r="";
        int c1 = 0;
        if (s.empty())
            return "";
        string res = "";
        int c = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '-') {
                continue;
            }
            if (c == k) {
                c = 0;
               res.push_back('-');
            }
            res.push_back(toupper(s[i]));
            c++;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};