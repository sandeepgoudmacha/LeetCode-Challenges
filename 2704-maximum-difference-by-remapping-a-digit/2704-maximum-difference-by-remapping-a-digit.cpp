class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        string r=to_string(num);
        int i=0;
        while(i < s.length() && s[i]=='9'){
            i++;
        }
        char a=s[i];
        for(int i=0;i<s.length();i++){
            if(s[i]==a){
                s[i]='9';
            }
        }
        int n1=stoi(s);
        i=0;
         while(i < s.length() && s[i]=='0'){
            i++;
        }
        s=r;
        char b=s[i];
        for(int i=0;i<s.length();i++){
            if(s[i]==b){
                s[i]='0';
            }
        }
        int n2=stoi(s);
        cout<<n1<<" "<<n2<<endl;
        return abs(n1-n2);
    }
};