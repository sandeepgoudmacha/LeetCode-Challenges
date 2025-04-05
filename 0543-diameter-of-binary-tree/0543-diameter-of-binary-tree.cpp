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
    int diameter(TreeNode* root,int& r){
        if(root==nullptr) return 0;
        int a=diameter(root->left,r);
        int b=diameter(root->right,r);
        // l=a;r=b;
        r=max(r,a+b);
        return max(a,b)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int l=0,r=INT_MIN;
        l= diameter(root,r);
    

        return r;
    }
};