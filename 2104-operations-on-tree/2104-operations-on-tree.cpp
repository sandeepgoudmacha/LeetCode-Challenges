class LockingTree {
public:
//  const int n=parent.size();
vector<int>parent;
    vector<vector<int>>v;
   vector<vector<int>>ch;
    LockingTree(vector<int>& parent) {

        int n=parent.size();
                this->parent = parent;
         v = vector<vector<int>>(n, vector<int>(2, 0));
         ch = vector<vector<int>>(n);
        for(int i=1;i<n;i++){
            if(parent[i]!=-1){
                ch[parent[i]].push_back(i);
            }

        }
    }
    
    bool lock(int num, int user) {
        if(v[num][0]==0){
             v[num][1]=user;
             v[num][0]=1;
             return true;
        }
        // else{
        //     if(v[num][1]==user) return true;
        // }
        return false;
    }
    
    bool unlock(int num, int user) {
        if(v[num][0]==1){
             if(v[num][1]==user){
                v[num][0]=0;
                v[num][1]=0;
                 return true;
             }
        }
        // else{
        //     return true;
        // }
        return false;
    }
    bool hasLockedAncestor(int num) {
        int p = parent[num];
        while (p != -1) {
            if (v[p][0] == 1)
                return true;
            p = parent[p];
        }
        return false;
    }
    bool descendant(int num,bool &f){
        for(auto c:ch[num]){
            descendant(c,f);
        }
        if(v[num][0]==1){
            v[num][0]=0;
            v[num][1]=0;
            f=true;
        }
        return f;

    }
    bool upgrade(int num, int user) {
        if(v[num][0]==0){
            int c=0,a=0;
            if(hasLockedAncestor(num)) return false;
            bool f=false;
            descendant(num,f);
            if(!f) return false;
           v[num][0]=1;
           v[num][1]=user;
           return true;
        }
        return false;
    }
};

/**
 * Your LockingTree object will be instantiated and called as such:
 * LockingTree* obj = new LockingTree(parent);
 * bool param_1 = obj->lock(num,user);
 * bool param_2 = obj->unlock(num,user);
 * bool param_3 = obj->upgrade(num,user);
 */