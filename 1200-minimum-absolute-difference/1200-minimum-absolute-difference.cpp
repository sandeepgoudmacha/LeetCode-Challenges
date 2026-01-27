class Solution {
public:
    int minimum(vector<int>& arr) {
        int mini = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++) {
            mini = min(mini, arr[i + 1] - arr[i]);
        }
        return mini;
    }

    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int MIN = minimum(arr);
        
        vector<vector<int>> ans;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] == MIN) {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }
        return ans;
    }
};