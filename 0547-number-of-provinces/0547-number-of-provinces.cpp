class Solution {
public:


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] == 1 && i!=j){
                    v[i].push_back(j);
                    v[j].push_back(i);
                }
            }
        }
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
                    for(auto x: v[r]){
                        if(!a[x]){
                            a[x]=1;
                            q.push(x);
                        }
                    }
                }
            }
        }
        return c;
    }
};