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
                if(b.find(a)!=string::npos){
                    v.push_back(a);
                    break;
                }
               
            }
        }
        return v;
    }
};