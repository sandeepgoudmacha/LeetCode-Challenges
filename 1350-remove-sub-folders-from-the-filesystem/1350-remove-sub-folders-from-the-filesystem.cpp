class Solution {
public:
    bool isSubStr(string x, unordered_map<string,int> &M) {
        string xx = "";
        for(int i=0;i<x.size();i++) {
            xx += x[i];
            if(M[xx] &&((i+1==x.size() || x[i+1]=='/'))) {
                return true;
            }
        }
        return false;
    }
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        unordered_map<string,int> M;
        vector<string> ans;
        for(int i=0;i<folder.size();i++) {
            if(!isSubStr(folder[i], M)) {
                ans.push_back(folder[i]);
            }
            M[folder[i]]  = 1;
        }
        return ans;
    }
};