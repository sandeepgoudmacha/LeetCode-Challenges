class Solution {
public:
    string compressedString(string word) {
        int c=0;
        queue<string>st;
        if(word.length()>0) c++;
        for(int i=1;i<word.length();i++){
            if(c>=9 || word[i]!=word[i-1]){
                st.push(to_string(c));
                st.push(string(1,word[i-1]));
                c=0;
                c++;
            }
            else{

                c++;
            }
        }
        if (word.length() > 0) {
            st.push(to_string(c));
            st.push(string(1, word.back()));
        }
        string r="";
        while(!st.empty()){
            r+=st.front();
            st.pop();
        }
        return r;
    }
};