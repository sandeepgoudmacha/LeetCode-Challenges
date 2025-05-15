class Solution {
public:
    int racecar(int target) {
        queue<pair<int,pair<int,int>>> q;
        set<pair<int,int>>vis;
        q.push({0,{1,0}});
        vis.insert({0,1});
        while(!q.empty()){
            auto [p,a]=q.front(); q.pop();
            int s=a.first,c=a.second;
            if(p==target) 
                return c;
            int np=p+s,ns=s*2;
            pair<int,int> x={np,ns};
            int rs=s>0?-1:1;
            // cout<<rs<<endl;
            pair<int,int> y={p,rs};
            if(abs(np)<=2*target && !vis.count(x)){
                vis.insert(x);
                q.push({np,{ns,c+1}});
            }
            if(!vis.count(y)){
                vis.insert(y);
                q.push({p,{rs,c+1}});
            }
        }
        return -1;
    }
};
