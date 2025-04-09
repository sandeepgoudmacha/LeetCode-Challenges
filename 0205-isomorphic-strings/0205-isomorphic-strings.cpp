class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s==t) return 1;
        unordered_map<char,char>m,m2;
        for(int i=0;i<s.length();i++){
            // char x=s[i];
            // if(s[i]==t[i]) continue;
            if(m.find(s[i])!= m.end() && m[s[i]]!=t[i] ||( m2.find(t[i])!=m2.end() && m2[t[i]]!=s[i])) return 0;
            // s[i]=t[i];
            m[s[i]]=t[i];
             m2[t[i]] = s[i];
        }
        // cout<<s<<" "<<t;
        return 1;
    }
};