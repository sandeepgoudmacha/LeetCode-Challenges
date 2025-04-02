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

    vector<int> postorderTraversal(TreeNode* root) {
                    vector<int>v;

        if(root){
            stack<TreeNode*>st1,st2;
            // vector<int>v;
            // TreeNode* cur=root;
            st1.push(root);
            while(!st1.empty()){
               TreeNode* t=st1.top();
               st1.pop();
               st2.push(t);
               if(t->left) st1.push(t->left);
               if(t->right) st1.push(t->right);
            }
            while(!st2.empty()){
                v.push_back(st2.top()->val);
                st2.pop();
            }
        }
        return v;
    }
};