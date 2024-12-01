class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<(int)arr.size();i++){
            for(int j=0;j<(int)arr.size();j++){
                if(arr[i]==2*arr[j]){
                    if(i!=j)
                        return true;
                }
            }
        }
        return false;
    }
};