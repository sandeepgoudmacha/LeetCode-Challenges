class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int l=0, maxi=0;
        int res=0;
        map<char,int>m;
        for(int r=0;r<n;r++){
            m[s[r]]++;
            maxi=max(maxi, m[s[r]]);
            while((r-l+1)-maxi > k){
                m[s[l]]--;
                l++;
            }
            res=max(res, r-l+1);
        }
        return res;
    }
};