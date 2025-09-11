class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        if(numRows > 1) v.push_back({1});
        else {
             v.push_back({1});
             return v;
        }
        for(int i=1;i<numRows;i++){
            vector<int>r;
            r.push_back(1);
            vector<int> c=v[i-1];
            for(int j=0;j<v[i-1].size()-1;j++){
                r.push_back(c[j]+c[j+1]);
            }
            r.push_back(1);
            v.push_back(r);
        }
        return v;
    }
};