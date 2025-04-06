class Solution {
public:
    int edgeScore(vector<int>& edges) {
        long long n=edges.size();
        // vector<vector<long long>>in(n);
        vector<long long>in(n,0);
        for(long long i=0;i<n;i++){
            in[edges[i]]+=i;
        }
        long long maxi=-1;
         int node=-1;
        for(int i=0;i<n;i++){
           
if (in[i] > maxi ) {    
                maxi=in[i];
                node=i;
            }
        }
        return node;
    }
};