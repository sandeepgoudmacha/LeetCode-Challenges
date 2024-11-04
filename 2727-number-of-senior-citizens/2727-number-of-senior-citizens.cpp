class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for(auto x:details){
            int a=(x[11]-'0')*10+(x[12]-'0');
            if(a>60) c++;
            cout<<a<<endl;
        }
        return c;
    }
};