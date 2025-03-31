class Solution {
public:
    bool dfs(vector<vector<int>>&adjList,stack<int>&st,vector<int>&v,int i,vector<int>&path){
        v[i]=1;
        path[i]=1;
        for(auto x:adjList[i]){
            if(!v[x]){
                // v[x]=1;

                if(dfs(adjList,st,v,x,path)) return true;;
            }
            else if(path[x]) return true;
        }
        st.push(i);
        path[i]=0;
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& p) {
        int n=p.size();
        vector<int>v(numCourses,0);
        vector<vector<int>>adjList(numCourses);
        for(int i=0;i<n;i++){
            
                adjList[p[i][1]].push_back(p[i][0]);
        }
        vector<int>path(numCourses,0);
        stack<int>st;
        for(int i=0;i<numCourses;i++){
            if(!v[i]){
                if(dfs(adjList,st,v,i,path)) return {};
            }
        }
        
        vector<int>r;
        while(!st.empty()){
            int top=st.top();
            st.pop();
            r.push_back(top);
        }
        return r;
    }
};