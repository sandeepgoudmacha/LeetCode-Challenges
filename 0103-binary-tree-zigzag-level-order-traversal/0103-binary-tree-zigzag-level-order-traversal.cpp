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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       
        vector<vector<int>>v;
         if(root==NULL) return v;
        queue<TreeNode*>q;
        q.push(root);
        int i=1;
        while(!q.empty()){
            int s=q.size();
            vector<int>r;
            // Treenode* t
            for(int i=0;i<s;i++){
                TreeNode* t=q.front();
                r.push_back(t->val);
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(i%2==0){
                reverse(r.begin(),r.end());
            }
               v.push_back(r);
               i++;
        }
        return v;
    }
};