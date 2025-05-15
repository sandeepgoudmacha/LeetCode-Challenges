class Solution {
public:
    int racecar(int target) {
        set<vector<int>>v;
        queue<vector<int>>q;
        vector<int>a(3);
        a[0]=0; a[1]=1;
        a[2]=0;
        q.push(a);
        vector<int>b(2);
        b[0]=0; b[1]=1;
        v.insert(b);
        while(!q.empty()) {
            vector<int>c=q.front();
            q.pop();
            int p=c[0],s=c[1],d=c[2];
            // cout<<p<<" "<<s<<" "<<d<<endl;
            if(p==target) return d;
            int np=p+s,ns=s*2;
            if(np<=10000 && np>0) {
                vector<int>e(2);
                e[0]=np; e[1]=ns;
                if(v.find(e)==v.end()) {
                vector<int>f(3);
                f[0]=np; f[1]=ns;
                f[2]=d+1;
                q.push(f);
                v.insert(e);
              }
            }
            int r;
            if(s>0) r=-1;
            else r=1;
            vector<int>g(2);
            g[0]=p;
            g[1]=r;
            if(v.find(g)==v.end()) {
                vector<int>h(3);
                h[0]=p; h[1]=r;
                h[2]=d+1;
                q.push(h);
                v.insert(g);
            }
        }
        return -1;
    }
};
