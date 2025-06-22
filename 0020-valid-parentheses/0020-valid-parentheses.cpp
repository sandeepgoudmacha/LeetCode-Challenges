
class Solution {
public:
    bool isValid(std::string s) {
        if(s.length()<2) return 0;
       stack<char>st;
       map<char,char>m;
       m[')']='(';
       m['}']='{';
       m[']']='[';
       for(auto x:s){
        if(m.count(x)==0){ 
            st.push(x);
        }
        else if(st.empty() || m[x]!=st.top()) return 0;
        else if(m[x]==st.top()) st.pop();
       }
       return st.empty();
    }
};