class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int m=*max_element(heights.begin(),heights.end());

        int n=heights.size();
        vector<int>count(m+1,0);
        vector<int>res(n);
        for(auto x:heights){
            count[x]++;
        }
        for(int i=1;i<=m;i++){
            count[i]+=count[i-1];
        }
        for(int i=n-1;i>=0;i--){
            res[count[heights[i]]-1]=heights[i];
            count[heights[i]]--;
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=res[i]) c++;
        }
        return c;
    }
};