class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>m;
        for(char x:allowed){
            m[x]++;
        }
        int count=0;
        for(auto x:words){
            bool b=0;
            for(auto w:x){
                if(m[w]==0){
                    b=1;
                    break;
                }
            }
            if(b==0) count++;
        }
        return count;
    }
};