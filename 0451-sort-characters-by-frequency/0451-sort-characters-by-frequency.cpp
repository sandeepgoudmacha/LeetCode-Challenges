class Solution {
public:
    string frequencySort(string s) {
         vector<int>v(128,0);
         for(auto x:s){
            v[x]++;
         }
         
         string r="";
         while(true){
         pair<int,char>p;

         int a=0;
         for(int i=0;i<v.size();i++){
            if(v[i]>a){
                a=v[i];
                p={i,static_cast<char>(i)};
            }
         }
         if(a==0) break;
         int b=p.first;
         v[b]=0;
         char ch=p.second;
         for(int i=0;i<a;i++){
            r+=ch;
         }
         }
         return r;
    }
};