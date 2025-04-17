class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int>m;
        int maxi=0;
        int l=0,r=0,c=0;
        for(int i=0;i<fruits.size();i++){
            if(m.size()<2 || m.find(fruits[i])!=m.end()){
                m[fruits[i]]++;
                maxi=max(maxi,r-l+1);
                r++;
            }
            else{
                m[fruits[l]]--;
                if(m[fruits[l]]==0) {
                    m.erase(fruits[l]);
                }
                i--;
                l++;
            }
        }
        return maxi;
    }
};