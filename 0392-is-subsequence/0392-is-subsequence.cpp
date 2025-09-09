class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.length(),n2=t.length(),i=0,j=0;
        if(s=="" ) return 1;
        if(t=="") return 0;
        while(i<n2 && j<n1){
            if(t[i]==s[j]) {
                i++;j++;
                continue;
            } 
            else{
              i++;
            }
        }
        return j==n1;
    }
};