class Solution {
public:
    string decodeString(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch!=']'){
                st.push(ch);
            }else{
                string d="";
                while(!st.empty() && st.top()!='['){
                    d=st.top()+d;
                    st.pop();
                }
                st.pop();
                string kStr="";
                while(!st.empty() && isdigit(st.top())){
                    kStr=st.top()+kStr;
                    st.pop();
                }
                int k=stoi(kStr);
                string exp="";
                for(int i=0;i<k;i++){
                    exp+=d;
                }
                for(char c:exp){
                    st.push(c);
                }
            }
        }
        string res="";
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};