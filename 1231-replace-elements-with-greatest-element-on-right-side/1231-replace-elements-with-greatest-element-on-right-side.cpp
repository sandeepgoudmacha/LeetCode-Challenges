class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int>st;
        int n=arr.size();
         int maxi=-1;
         for(int i=n-1;i>=0;i--){
            st.push(maxi);
            maxi=max(maxi,arr[i]);
         }
         for(int i=0;i<n;i++){
            arr[i]=st.top();
            st.pop();
         }
         return arr;
    }
};