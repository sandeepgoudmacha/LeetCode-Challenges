class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n=s.size();
        if(s[n-1]!='0') return false;
        map<int,bool>v;
        queue<int>q;
        q.push(0);
        v[0]=true;
        int b=0;
        while(!q.empty()){
            int a=q.front();
            q.pop();
            int st=max(a+minJump,b+1);
            int en=min(a+maxJump,n-1);
            for(int i=st;i<=en;i++){
                if(s[i]=='0'&&!v[i]){
                if(i==n-1) return true;
                v[i]=true;
                q.push(i);
                // cout<<
            }
            }
            b=en;
            // cout<<b<<endl;
        }
        return v[n-1];
    }
};