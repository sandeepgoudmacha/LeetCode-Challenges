class Solution {
public:
    string reverseWords(string s) {
        string r="",a="";
        // stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
               r+=s[i];
            }
            else if(s[i]==' ' && r!=""){
                a=" "+r+a;
                r="";
            }
            if(i==s.length()-1 && r!=""){
                a=r+a;
                r="";
            }
        }
        if(a[0] == ' ')
            a.erase(0, 1);
        return a;
    }
};