class Solution {
public:
    int minChanges(string s) {
        int c=0;
        if((int)s.length()%2!=0) return c;
        for(int i=0;i<s.length();i+=2){
            if(s[i]!=s[i+1]) c++;
        }
        return c;
    }
};