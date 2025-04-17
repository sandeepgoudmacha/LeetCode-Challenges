class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int maxi=0;
        int l=0,r=0;
        string res="";
        int size=0;
        for(int i=0;i<s.length();i++){
           if(st.find(s[i])==st.end()){
             st.insert(s[i]);
             size=r-l+1;
             maxi=max(maxi,size);
             res+=s[i];
             r++;
           }
           else{
            st.erase(res[0]);
            res.erase(0,1);
            // r+=s[i];
            // st.insert(s[i]);
            i--;
            l++;
           }
        }
        return maxi;
    }
};