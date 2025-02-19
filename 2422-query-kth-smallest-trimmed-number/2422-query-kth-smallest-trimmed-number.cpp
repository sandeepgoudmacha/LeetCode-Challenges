class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> result;
        int n = nums.size();
        
        for (auto& q : queries) {
            int k = q[0], trim = q[1];
            vector<pair<string, int>> trimmedNumbers;
            
            for (int i = 0; i < n; i++) {
                string trimmed = nums[i].substr(nums[i].size() - trim);
                trimmedNumbers.push_back({trimmed, i});
            }
            
            sort(trimmedNumbers.begin(), trimmedNumbers.end());
            result.push_back(trimmedNumbers[k - 1].second);
        }
        
        return result;
    }
};
