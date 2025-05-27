class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
         int n = s.size();
    if (n <= 1) return n;
    int maxLen = 1, start = 0, adjDupCount = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) adjDupCount++;
        while (adjDupCount > 1) {
            if (s[start] == s[start + 1]) adjDupCount--;
            start++;
        }
        maxLen = max(maxLen, i - start + 1);
    }
    return maxLen;
    }
};