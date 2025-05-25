class Solution {
public:
    string resultingString(string s) {
        stack<char> st;
        for (char c : s) {
            if (!st.empty()) {
                char t = st.top();
                if ((t == 'a' && c == 'z') || (t == 'z' && c == 'a') || abs(t - c) == 1) {
                    st.pop();
                    continue;
                }
            }
            st.push(c);
        }

        string res = "";
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
