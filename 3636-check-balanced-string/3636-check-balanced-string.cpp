class Solution {
public:
    bool isBalanced(string num) {
        int e=0,o=0;
        for(int i=0;i<num.length();i++){
            if(i%2==0){
                e+=num[i]-'0';
            }
            else {
                o+=num[i]-'0';
            }
        }
        if(o==e) return 1;
        return 0;
    }
};