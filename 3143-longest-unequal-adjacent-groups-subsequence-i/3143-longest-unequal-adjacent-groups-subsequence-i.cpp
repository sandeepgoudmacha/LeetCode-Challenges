class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
    vector<string>v;
    v.push_back(words[0]);
    for(int i=1;i<groups.size();i++){
        if(groups[i]!=groups[i-1]) v.push_back(words[i]);
    }  
    return v;
    }
};