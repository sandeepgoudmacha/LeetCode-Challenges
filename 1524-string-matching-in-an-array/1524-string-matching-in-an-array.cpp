class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string & a, const string &b){
            return a.size()<b.size();
        });
        for(auto x:words) cout<<x<<" ";
        vector<string>v;
        for(int i=0;i<words.size()-1;i++){
            string a=words[i];
            for(int j=i+1;j<words.size();j++){
                string b=words[j];
                // int k=0,l=0;
                for(int i=0;i<=b.length()-a.length();i++){
                    int l=0;
                    while(l<a.length() && b[i+l]==a[l]){
                        l++;
                    }
                     if(l==a.length()){
                    v.push_back(a);
                    goto g;
                }
                }
               
            } g:
        }
        return v;
    }
};