/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<int>v;
    void inorder(TreeNode* n){
        if(n==NULL) return;
        inorder(n->left);
        v.push_back(n->val);
        inorder(n->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return v[k-1];
    }
};