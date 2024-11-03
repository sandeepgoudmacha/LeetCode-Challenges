class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        if(s==goal) return true;
        string r="";
        int c=0;
        while(s!=goal){
            r=s[0];
            s.erase(s.begin()+0);
            s+=r;
            cout<<s<<" ";
            if(s==goal) return true;
            c++;
            if(c>100) return false;
         }
         return false;
     


    }
};