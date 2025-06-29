class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;

        for(int i=0;i<nums1.size();i++){
            auto it=find(nums2.begin(),nums2.end(),nums1[i]);
            int val=-1;
            if(it!=nums2.end()){
                for(auto j=it-nums2.begin()+1;j<nums2.size();j++){
                    if(nums2[j]>nums1[i]){
                        val=nums2[j];
                        break;
                    }
                }
                v.push_back(val);
            }
        }
        return v;
    }
};