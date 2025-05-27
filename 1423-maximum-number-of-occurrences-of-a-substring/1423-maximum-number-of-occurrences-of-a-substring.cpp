class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int> sc;
        unordered_map<char,int> cf;
        deque<char> w;
        int u=0,mxO=0;
        for(int i=0;i<s.size();i++) {
            w.push_back(s[i]);
            if(++cf[s[i]]==1) u++;
            if(w.size()>minSize) {
                char f=w.front();
                w.pop_front();
                if(--cf[f]==0) u--;
            }
            if(w.size()==minSize&&u<=maxLetters) {
                string sub(w.begin(),w.end());
                mxO=max(mxO,++sc[sub]);
            }
        }
        return mxO;
    }
};