class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.length()-1;i>=0;i--){
            if((num[i]-'0') % 2!=0 && num[i]!='0'){
                string s=num.substr(0,i+1);
                return s;
            }
        }
        return "";
    }
};