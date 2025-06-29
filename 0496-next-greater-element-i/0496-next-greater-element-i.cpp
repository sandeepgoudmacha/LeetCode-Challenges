class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>v(10001,-1);
        vector<int>r;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            if(!st.empty() && st.top()>nums2[i]){
                     v[nums2[i]]=st.top();
                    st.push(nums2[i]);
            }
            else{
                while(!st.empty() && nums2[i]>st.top()) st.pop();
                if(!st.empty()) v[nums2[i]]=st.top();
            }
             st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            r.push_back(v[nums1[i]]);
        }
        return r;
    }
};