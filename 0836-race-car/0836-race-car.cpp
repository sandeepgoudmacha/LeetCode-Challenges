class Solution {
public:
    int racecar(int target) {
        queue<pair<int,pair<int,int>>> q;
        set<pair<int,int>>vis;
        q.push({0,{1,0}});
        vis.insert({0,1});
        while(!q.empty()){
            auto top=q.front(); q.pop();
            int p=top.first;
            int s=top.second.first,c=top.second.second;
            // cout<<p<<" "<<s<<" "<<c<<endl;
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
