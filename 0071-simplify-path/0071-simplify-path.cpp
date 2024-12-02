class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string r;
        for(int i=0;i<(int)path.size();i++){
            if(path[i]=='/') continue;
            // for(int i=)
            string d="";
            while(i<path.size() && path[i]!='/'){
                d+=path[i];
                ++i;
            }
            if(d==".") continue;
            else if(d==".."){
                if(!st.empty()) st.pop();
            }
            else st.push(d);
        }
        while(!st.empty()){
            r="/"+st.top()+r;
            st.pop();
        }
        if(r.size()==0) return "/";
        return r;
    }
};

