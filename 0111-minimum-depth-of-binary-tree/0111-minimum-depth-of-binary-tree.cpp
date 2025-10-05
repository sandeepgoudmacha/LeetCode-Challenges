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
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int d=1;
        while(!q.empty()){
            int l=q.size();
            for(int i=0;i<l;i++){
                TreeNode* n=q.front();
                q.pop();
                if(n->left==NULL && n->right==NULL){
                    return d;
                }
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            d++;
        }
        return d;
    }
};