class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return 0;
        map<char,int>m,m2;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            m2[t[i]]++;
            if(m.find(t[i]) == m.end()) return 0;
        }
        for(int i=0;i<s.length();i++){
            if(m2.find(s[i])==m2.end()) return 0;
            if(m[s[i]]==m2[s[i]]) continue;
            else if(m[s[i]]!=m2[s[i]]) return 0;
        }
        return 1;
    }
};