class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
         int n=asteroids.size();
         stack<pair<int,int>>st;
         vector<int>v;
         for(int i=n-1;i>=0;i--){
            if(st.empty() || asteroids[i]<0) st.push({asteroids[i],i});
            else{
                while(!st.empty() && st.top().first<0 ){
                    if(abs(st.top().first)==asteroids[i]) {
                        asteroids[i]=INT_MAX;
                        asteroids[st.top().second]=INT_MAX;
                        st.pop();
                        break;
                    }
                    else if(abs(st.top().first)<asteroids[i]){
                         asteroids[st.top().second]=INT_MAX;
                         st.pop();
                    }
                    else{
                        asteroids[i]=INT_MAX;break;
                    }
                }
                 if (asteroids[i] != INT_MAX) {
                    st.push({asteroids[i], i});
                }
            }
         }
         for(int i=0;i<n;i++){
            if(asteroids[i]!=INT_MAX){
                v.push_back(asteroids[i]);
            }
         }
         return v;
    }
};