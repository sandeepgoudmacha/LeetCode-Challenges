class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int i=0,j=0,n=strs.size();

        if(strs[0]=="") return "";
        string s1=strs[0],s2=strs[n-1],r="";
        int n1=s1.length(),n2=s2.length();
        while(j<n2 && i<n1 && s1[i]==s2[j]){
            r+=s1[i];
            i++;
            j++;
            cout<<i<<" "<<j<<" "<<r<<endl;
        }
        return r;
    }
};