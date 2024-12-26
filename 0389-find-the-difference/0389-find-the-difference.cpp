class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        for(auto x:s){
            if(x != t[i]){ return t[i];}
            i++;
        }
        return t[i];
    }
};