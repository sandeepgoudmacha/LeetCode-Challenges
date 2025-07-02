class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        map<int,int>m;
        stack<int>st;
        vector<int>v(n);
        for(int x:nums2){
            while(!st.empty() && x>st.top()){
                m[st.top()]=x;
                st.pop();
            }
            st.push(x);
        }
        for(int i=0;i<nums1.size();i++){
            if(m[nums1[i]]==0){
                v[i]=-1;
            }
            else{
                v[i]=m[nums1[i]];
            }
        }
        return v;
    }
};