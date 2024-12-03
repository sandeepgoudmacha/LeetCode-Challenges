class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        // deque<string>d;
        string r="";
        int n=spaces.size();
        int j=0;
        bool b=0;
        for(int i=0;i<s.length();i++){
            if(j<n){
            if(i==spaces[j]){
                r+=" ";
                b=1;
            }
            }
            if(j<n && b==1){
                j++;
                b=0;
            }
            r+=s[i]; 
        }
        return r;
    }
};