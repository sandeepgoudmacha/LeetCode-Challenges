class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v{{1}};

        for(int i=1;i<numRows;i++){
            vector<int>r;
            r.push_back(1);
            vector<int>res=v.back();
            for(int j=0;j<res.size()-1;j++){
                r.push_back(res[j]+res[j+1]);
            }
            r.push_back(1);
            v.push_back(r);
        }
        return v;
    }
};