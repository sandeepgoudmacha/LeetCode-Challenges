class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s;
        for(int i=0;i<emails.size();i++){
            string r=emails[i];
            int j=0;
            string p="";
            int k=0;
            while(k<r.size() && r[k]!='@'){
                k++;
            }
            string f=r.substr(k);
            while(j< r.size() && r[j]!='@'){
                // if(r[j]=='.') continue;
                if(r[j]!='.' && isalnum(r[j])) p+=r[j];
                if(r[j]=='+' || r[j]=='@') break;
                j++;
            }
            cout<<f<<endl;
            p+=f;
            cout<<p<<endl;;
            s.insert(p);
        }
        return (int)s.size();
    }
};