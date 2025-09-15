class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string r="";
        map<string,int>m;
        int c=0;
        for(int i=0;i<arr.size();i++){
           
                m[arr[i]]++;
        
        }
        for(auto x:arr){
            if(m[x]==1){
                k--;
            }
            if(k==0) return x;
        }
        return "";
    }
};