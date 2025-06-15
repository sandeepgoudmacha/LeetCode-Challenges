class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        string r=s;
        int i=0;
        while(i<s.length() && s[i]=='9'){
            i++;
        }
        char a=s[i];
        if (i < s.length()) {
        for(int i=0;i<s.length();i++){
            if(s[i]==a) s[i]='9';
        }
        }
        int n1=stoi(s);
        s=r;
        i=0;
         while(i<s.length() && (s[i]=='1'||s[i]=='0')){
            i++;
        }
        char b=s[i];
        if (i < s.length()) {
        for(int i=0;i<s.length();i++){
            if(s[i]==b) s[i]=(r[0]==b)?'1':'0';
        }
        }
        int n2=stoi(s);
        return abs(n1-n2);
    }
};