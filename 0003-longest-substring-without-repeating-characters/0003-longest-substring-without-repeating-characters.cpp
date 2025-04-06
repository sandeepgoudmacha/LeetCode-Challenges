class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int maxi=0;
        int left=0;
        while(left<s.length()){
            st.clear();
            int c=0;
        for(int i=left;i<s.length();i++){
            
            if(st.find(s[i])==st.end()){
                c++;
                st.insert(s[i]);

            }
            else{
                // maxi=max(maxi,c);
                // c=0;
                // st.clear();
                // st.insert(s[i]);
                break;
            }
          
        }
         maxi=max(maxi,c);
          left++;
        }
        return maxi;
    }
};