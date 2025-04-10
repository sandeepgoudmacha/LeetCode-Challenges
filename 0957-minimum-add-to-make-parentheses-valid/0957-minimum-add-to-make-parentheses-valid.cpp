class Solution {
public:
    int minAddToMakeValid(string s) {
        int c1=0,c2=0;
        for(auto x:s){

            if(x=='('){
                c1++;
            }

            if(c1>0){
                if(x==')')
                    c1--;
            }
            else if(x==')'){
                c2++;
            }
            
        }
       return abs(c1+c2);
    }
};