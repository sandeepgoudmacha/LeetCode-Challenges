class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        string r="";
        int c=0;
        for(char c:s){
           if(c=='('){
            if(!st.empty()) r+=c;
            st.push(c);
           }
           else if(c==')'){
            st.pop();
            if(!st.empty()) r+=c;
           }
        }
        return r;
    }
};