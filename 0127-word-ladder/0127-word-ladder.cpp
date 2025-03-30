class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if(find(wordList.begin(),wordList.end(),endWord)==wordList.end()) return 0;
        queue<pair<string,int>>q;
        unordered_set<string>st(wordList.begin(),wordList.end());
        int n=wordList.size(),m=beginWord.length();
        int c=0;
        st.erase(beginWord);
        q.push({beginWord,1});
         while(!q.empty()){
            string s=q.front().first;
             c=q.front().second;
            q.pop();
             if(s==endWord) return c;
            // int d=0;
            for(int i=0;i<s.length();i++){ 
            char r=s[i];
            for(char j='a';j<='z';j++){
                s[i]=j;
                if(st.find(s)!=st.end()){
                    st.erase(s);
                    q.push({s,c+1});
                }
            }
            s[i]=r;
            // wordList.erase(wordList[i]); 
            //  if(d>1) continue;
            // q.push({r,c+1});
            // if(s==endWord) return c;
            }
            
        }
        return 0;
    } 
};