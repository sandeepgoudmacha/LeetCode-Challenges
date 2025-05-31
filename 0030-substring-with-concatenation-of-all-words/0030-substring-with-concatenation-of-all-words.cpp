class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int>map,freq;
        for(int i=0;i<words.size();i++)
            map[words[i]]++;
        int l=words[0].size();
        vector<int>res;
        for (int i=0;i<l;i++) {
            int left=i,right=i;
            while(right<s.size()) {
                string str=s.substr(right,l);
                if(map.find(str)==map.end()) {
                    right+=l;
                    left=right;
                    freq.clear();
                    continue;
                }
                freq[str]++;
                while(left<right && freq[str]>map[str]) {
                    string w=s.substr(left,l);
                    freq[w]--;
                    left+=l;
                    // cout<<left<<endl;
                }
                if(map==freq)
                    res.push_back(left);
                right+=l;
            }
            freq.clear();
        }
        return res;
    }
};