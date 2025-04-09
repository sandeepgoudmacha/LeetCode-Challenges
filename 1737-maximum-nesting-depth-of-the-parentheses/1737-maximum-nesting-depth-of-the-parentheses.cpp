class Solution {
public:
    int maxDepth(string s) {
        int c=0,m=0;
        for(auto x:s){
            if(x=='(') c++;
            m=max(m,c);
            if(x==')') c--;
        }
        return m;
    }
};