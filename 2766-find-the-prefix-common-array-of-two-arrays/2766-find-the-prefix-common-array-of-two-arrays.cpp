class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>v(n+1,0);
        vector<int>r;
        for(int i=0;i<n;i++){
            v[A[i]]++;
            v[B[i]]++;
            int count=0;
            for(auto x:v){
                if(x>1) count++;
            }
            r.push_back(count);
        }
        return r;
    }
};