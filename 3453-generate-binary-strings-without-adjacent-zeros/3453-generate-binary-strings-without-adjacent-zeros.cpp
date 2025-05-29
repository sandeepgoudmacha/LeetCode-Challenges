class Solution {
public:
    vector<string>res;
    void findValue(int i,string& x,int n){
        if(x.length()==n){
            res.push_back(x);
            return;
        }
        x.push_back('1');
        findValue(1,x,n);
        x.pop_back();
        if(i==1){
            x.push_back('0');
            findValue(0,x,n);
            x.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        string a="0",b="1";
        findValue(0,a,n);
        findValue(1,b,n);
        return res;
    }
};