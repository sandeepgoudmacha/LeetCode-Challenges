class Solution {
public:
    bool isPalindrome(string s) {

        int l=0,r=s.length()-1;
        while(l<=r){
        
            while(l<s.length()-1 && !isalnum(s[l])){
                l++;
            }
            while(r>=0  && !isalnum(s[r])){
                r--;
            }
            // if(l>=r)
            if(isalnum(s[l]) && isalnum(s[r])){
                if(tolower(s[l]) == tolower(s[r])) {
                    l++;
                    r--;
                }
                else return 0;
            }
        }
        return 1;
    }
};