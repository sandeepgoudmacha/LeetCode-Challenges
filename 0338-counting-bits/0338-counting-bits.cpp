class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        v.push_back(0);
        for(int i=1;i<=n;i++){
            int c=0;
            int a=i;
            while(a){
                a=a&(a-1);
                c++;
            }
            v.push_back(c);
        }
        return v;
    }
};