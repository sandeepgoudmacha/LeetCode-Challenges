class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        vector<string>s;
        int n=searchWord.length();
        int c=0;
        while(ss >> word){
            c++;
            if(word.substr(0, n)== searchWord){
                return c;
            }
        }
        return -1;
    }
};