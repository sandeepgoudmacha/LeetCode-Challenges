class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        map<string,vector<string>>m;
        for(int i=0;i<n;i++){
            string r=strs[i];
            sort(r.begin(),r.end());
            m[r].push_back(strs[i]);
        }
        vector<vector<string>>v;
        for(auto x:m){
            v.push_back(x.second);
        }
        return v;
    }
};