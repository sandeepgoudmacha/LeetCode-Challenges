class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       map<int,int>m;
       stack<pair<int,int>>st;
       int n=nums.size();
       vector<int>v(n,-1);
       int i=0;
       for(int x:nums){
        while(!st.empty() && x>st.top().first){
            v[st.top().second]=x;
            st.pop();
        }
        st.push({x,i});
        i++;
       }
       for(int x:nums){
        while(!st.empty() && x>st.top().first){
            v[st.top().second]=x;
            st.pop();
        }
        // st.push(x);
       }

       return v;
    }
};