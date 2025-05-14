class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        int sl=s.length();
        int al=a.length();
        int bl=b.length();
        cout<<sl<<" "<<al<<" "<<bl<<endl;
        cout<<sl-al<<" "<<sl-bl<<endl;
        vector<int>v;
        int i=0;
        while(i<=sl-al){
         i= s.find(a,i);
         if (i==string::npos) break;
         int j=0;
         while(j<=sl-bl){
            j=s.find(b,j);
            if (j==string::npos) break;
            if(abs(j-i)<=k) {
                v.push_back(i);
                break;
            }

            j++;
         }
        i++;
        }
        sort(v.begin(),v.end());
        return v;
    }
};