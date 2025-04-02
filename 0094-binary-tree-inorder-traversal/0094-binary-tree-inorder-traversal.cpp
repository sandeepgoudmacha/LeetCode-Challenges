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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;

        if(root){
           stack<TreeNode*>st;
        //    st.push(root);
        TreeNode* cur=root;
           while(cur!=NULL || !st.empty()){
          
            while(cur!=nullptr){
                st.push(cur);
                cur=cur->left;
            }
            cur=st.top();
            st.pop();
            v.push_back(cur->val);
            cur=cur->right;
           }
        }
        return v;
    }
};