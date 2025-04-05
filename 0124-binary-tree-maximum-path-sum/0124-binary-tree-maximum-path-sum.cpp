class Solution {
public:
    int maxGain(TreeNode* root, int& maxSum) {
        if (!root) return 0;

        int left = max(0, maxGain(root->left, maxSum));
        int right = max(0, maxGain(root->right, maxSum));

        maxSum = max(maxSum, root->val + left + right);

        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxGain(root, maxSum);
        return maxSum;
    }
};
