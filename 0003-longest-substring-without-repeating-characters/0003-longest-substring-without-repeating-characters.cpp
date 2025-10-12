class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0;
        map<char,int>m;
        int c=0,maxi=0;
        while(r<s.length()){
            if(m.find(s[r])==m.end()){
                m[s[r]]++;
                c++;
                r++;
            }
            else{
                 m.erase(s[l]);
                 c--;
                l++;
               
            }
            maxi=max(maxi,c);


        }
        return maxi;
    }
};