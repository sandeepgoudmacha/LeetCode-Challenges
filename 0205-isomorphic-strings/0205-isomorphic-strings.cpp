class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s==t) return 1;
       map<char,char>m1,m2;
       for(int i=0;i<s.length();i++){
            // if(s[i]==t[i]) continue;
            // if((m1.count(s[i]) && m1[s[i]]==t[i]) || (m2.count(t[i]) && m2[t[i]]==s[i])) continue;
             if((m1.count(s[i]) && m1[s[i]]!=t[i]) || (m2.count(t[i]) && m2[t[i]]!=s[i])) return 0;
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
       }
       return 1;
    }
};