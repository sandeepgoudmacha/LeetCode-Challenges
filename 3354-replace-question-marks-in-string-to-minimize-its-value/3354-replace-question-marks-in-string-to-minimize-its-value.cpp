class Solution {
public:
    string minimizeStringValue(string s) {
        vector<int>v(26,0);
        vector<int>qv(26,0);
        int nq=0;
        for(auto c:s){
            if(c=='?') nq++;
            else v[c-'a']++;
        }
        while(nq--){
            int j=0;
            for(int i=1;i<26;i++){
                if(v[i]<v[j]) j=i;
            }
            v[j]++;
            qv[j]++;
        }
        int cur=0;
        for(auto &c:s){
            if(c=='?'){
                while(qv[cur]--<=0) cur++;
                c='a'+cur;
            }
        }
        return s;
    }
};