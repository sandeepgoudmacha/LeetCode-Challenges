class Solution {
public:
    bool binarySearchRow(vector<int>& row, int target) {
        int l = 0, r = row.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (row[mid] == target) return true;
            else if (row[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        for (int i = 0; i < rows; ++i) {
            if (target >= matrix[i][0] && target <= matrix[i][cols - 1]) {
                if (binarySearchRow(matrix[i], target)) return true;
            }
        }

        return false;
    }
};
