class Solution {
public:


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        
    vector<int> a(n, 0); 
        int c=0;
        for(int i=0;i<n;i++){
            if(!a[i]){
                c++;
                queue<int>q;
                q.push(i);
                a[i]=1;
                while(!q.empty()){
                    int r=q.front();
                    q.pop();
                    for (int j = 0; j < n; j++) {
                        if (isConnected[r][j] && !a[j]) {
                            a[j] = 1;
                            q.push(j);
                        }
                    }
                }
            }
        }
        return c;
    }
};