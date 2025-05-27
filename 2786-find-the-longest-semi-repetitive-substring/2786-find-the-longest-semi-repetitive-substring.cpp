class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int n=s.size();
        if(n<=1) return n;
        int maxi=1,st=0,a=0;
        for(int i=1;i<n;i++) {
            if(s[i]==s[i-1]) a++;
            while(a>1) {
                if(s[st]==s[st+1]) a--;
                st++;
            }
            maxi=max(maxi,i-st+1);
        }
    return maxi;
    }
};