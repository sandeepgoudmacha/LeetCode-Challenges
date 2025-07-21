class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        vector<int>v(n,0);
        string r="";
        for(int i=0;i<n;i++){
            if(i==0 || r=="") {
                r+=s[i];
                v[i]=1;
            }
            else if(i>0 && s[i]==s[i-1]){
                v[i]=v[i-1]+1;
                if(v[i]<3){
                    r+=s[i];
                }
            }
            else{
                v[i]=1;
                r+=s[i];
            }
    // cout<<r<<endl;
        }
        return r;
    }
};